/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:20:13 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:07:24 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_memcmp.c
 * @brief Compares byte string s1 against byte string s2.
 *
 * The ft_memcmp() function compares the first n bytes of the memory areas
 * s1 and s2. The comparison is done lexicographically.
 *
 * @param s1 Pointer to the first memory area.
 * @param s2 Pointer to the second memory area.
 * @param n Number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if the first n bytes
 *         of s1 is found, respectively, to be less than, to match, or be greater than
 *         the first n bytes of s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ps1;
	const unsigned char	*ps2;
	size_t				i;

	ps1 = ((const unsigned char *)s1);
	ps2 = ((const unsigned char *)s2);
	i = 0;
	while (i < n)
	{
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
		i++;
		ps1++;
		ps2++;
	}
	return (0);
}