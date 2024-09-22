/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:26:32 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:30:01 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies up to n characters from the string src to dest.
 *
 * This function copies at most n characters from the string pointed to by src 
 * to the buffer pointed to by dest. If the length of src is less than n, the 
 * remainder of dest will be padded with null bytes ('\0'). If the length of 
 * src is greater than or equal to n, the string will not be null-terminated.
 *
 * @param dest Pointer to the destination buffer
 * 			where the content is to be copied.
 * @param src Pointer to the source string to be copied.
 * @param n Maximum number of characters to be copied from src.
 * @return A pointer to the destination string dest.
 */
static char	*ft_strncpy(char *dest, char const *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 * @brief Trims the characters from the beginning and end of a string.
 *
 * This function removes all characters in the set from the beginning
 * and end of the given string.
 *
 * @param s1 The string to be trimmed.
 * @param set The set of characters to be trimmed from the string.
 * @return A newly allocated string with the trimmed content,
 * or NULL if allocation fails or if s1 or set is NULL.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*start;
	char const	*end;
	size_t		trimmed_len;
	char		*buffer;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	end = s1 + ft_strlen(s1) - 1;
	while (*start && ft_strchr(set, *start))
		start++;
	while (end > start && ft_strchr(set, *end))
		end--;
	trimmed_len = end - start + 1;
	buffer = ft_calloc(trimmed_len + 1, 1);
	if (!buffer)
		return (NULL);
	ft_strncpy(buffer, start, trimmed_len);
	return (buffer);
}
