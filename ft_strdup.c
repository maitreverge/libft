/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:23:05 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:12:28 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_strdup.c
 * @brief Duplicates a string.
 *
 * This function allocates sufficient memory for a copy of the string s1,
 * does the copy, and returns a pointer to it. The memory allocated for the
 * new string should be freed by the caller when it is no longer needed.
 *
 * @param s1 The string to be duplicated.
 * @return A pointer to the newly allocated string, or NULL if memory allocation fails.
 */
char	*ft_strdup(const char *s1)
{
	char	*buffer;
	int		len_s1;

	len_s1 = ft_strlen(s1);
	buffer = (char *)malloc(len_s1 + 1);
	if (!buffer)
		return (NULL);
	ft_memcpy(buffer, s1, len_s1);
	buffer[len_s1] = '\0';
	return (buffer);
}

