/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:42:49 by nope              #+#    #+#             */
/*   Updated: 2023/08/17 17:42:54 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
		*p_dst = *p_src;
		if (*p_src == char_c)
		{
			return (p_dst + 1);
		}
		i++;
		p_src++;
		p_dst++;
	}
	return (NULL);
}
