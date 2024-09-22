/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:24:27 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:29:18 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares up to n characters of the null-terminated strings s1 and s2.
 *
 * This function compares the two strings s1 and s2.
 * It returns an integer less than, equal to, 
 * or greater than zero if s1 (or the first n bytes thereof) is found,
 * respectively, to be less than, 
 * to match, or be greater than s2.
 *
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @param n The maximum number of characters to compare.
 * @return An integer less than, equal to, or greater than zero if s1
 * (or the first n bytes thereof) 
 *         is found, respectively, to be less than, to match,
 * or be greater than s2.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (s2[i] || s1[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
