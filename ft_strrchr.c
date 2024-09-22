/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:26:13 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:14:19 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_strrchr.c
 * @brief Locate the last occurrence of a character in a string.
 *
 * This function searches for the last occurrence of the character `c` 
 * (converted to an unsigned char) in the string pointed to by `s`.
 *
 * @param s The string to be searched.
 * @param c The character to be located.
 * @return A pointer to the last occurrence of the character `c` in the string `s`,
 *         or NULL if the character is not found. If `c` is '\0', the function 
 *         returns a pointer to the null terminator.
 */
char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc_c;
	char			*p_s;
	char			*index;

	p_s = (char *)s;
	uc_c = (unsigned char)c;
	index = NULL;
	while (*p_s != '\0')
	{
		if (*p_s == uc_c)
			index = p_s;
		p_s++;
	}
	if (uc_c == '\0')
		return (p_s);
	else if (index != NULL)
		return (index);
	else
		return (NULL);
}