/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:20:26 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:07:59 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_memmove.c
 * @brief Implementation of the ft_memmove function.
 */

/**
 * @brief Copies len bytes from memory area src to memory area dst.
 *
 * The memory areas may overlap: copying takes place as though the bytes in src
 * are first copied into a temporary array that does not overlap src or dst,
 * and the bytes are then copied from the temporary array to dst.
 *
 * @param dst Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param len Number of bytes to copy.
 * @return Pointer to the destination memory area (dst).
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*src_ptr;
	size_t		i;
	char		*dest_ptr;

	dest_ptr = (char *)dst;
	src_ptr = (const char *)src;
	if (dest_ptr > src_ptr)
	{
		i = len;
		while (i > 0)
		{
			--i;
			dest_ptr[i] = src_ptr[i];
		}
	}
	else if (dest_ptr < src_ptr)
	{
		i = 0;
		while (i < len)
		{
			dest_ptr[i] = src_ptr[i];
			++i;
		}
	}
	return (dst);
}
