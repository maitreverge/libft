/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:23:20 by nope              #+#    #+#             */
/*   Updated: 2023/09/04 14:55:16 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	if (src < dst)
		while (len--)
			d[len] = s[len];
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
	return (dst);
}

/*

IMPORTANT :
memmove ≠ memcpy

memmove : Copies fromn src to dest, in a non destructive way.

It means that SRC and DEST might overlap.



*/
