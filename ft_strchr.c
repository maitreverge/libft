/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:22:50 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:24:54 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * This function searches for the first occurrence of the character `c` 
 * (converted to an unsigned char) in the string pointed to by `s`.
 *
 * @param s The string in which to search for the character.
 * @param c The character to search for, converted to an unsigned char.
 * @return A pointer to the first occurrence
 * of the character `c` in the string `s`,
 * or NULL if the character is not found. If `c` is '\0', returns a pointer
 * to the null terminator of the string.
 */
char	*ft_strchr(const char *s, int c)
{
	char			*p_s;
	unsigned char	uc_c;

	p_s = ((char *)s);
	uc_c = ((unsigned char)c);
	while (*p_s != '\0')
	{
		if (*p_s == uc_c)
			return (p_s);
		p_s++;
	}
	if (uc_c == '\0')
		return (p_s);
	else
		return (NULL);
}
