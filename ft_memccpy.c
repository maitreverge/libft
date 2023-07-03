/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianverge <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:55:46 by florianverge      #+#    #+#             */
/*   Updated: 2023/07/03 13:47:44 by florianverge     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	char			*p_dst;
	const char		*p_src;
	unsigned char	char_c;
	unsigned long	i;

	p_dst = ((char *)dst);
	p_src = ((const char *)src);
	char_c = ((unsigned char)c);
	i = 0;
	while (i < n)
	{
		if (*p_src == char_c)
		{
			p_dst++;
			return ((void *)p_dst);
		}
		*p_dst = *p_src;
		i++;
		p_src++;
		p_dst++;
	}
	return (NULL);
}
