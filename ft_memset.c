/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:20:34 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:08:10 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_memset.c
 * @brief Fills a block of memory with a specified value.
 *
 * This function sets the first `len` bytes of the memory area pointed to by `b`
 * to the specified value `c`.
 *
 * @param b Pointer to the memory area to be filled.
 * @param c Value to be set. It is passed as an int, but it is converted to an unsigned char.
 * @param len Number of bytes to be set to the value.
 * @return Returns a pointer to the memory area `b`.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = c;
		i++;
	}
	return (b);
}