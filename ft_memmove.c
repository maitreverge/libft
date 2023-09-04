/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:23:20 by nope              #+#    #+#             */
/*   Updated: 2023/09/04 15:12:15 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*

IMPORTANT :
memmove ≠ memcpy

memmove : Copies fromn src to dest, in a non destructive way.

It means that SRC and DEST might overlap.



*/
