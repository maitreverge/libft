/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianverge <florianverge@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:55:46 by florianverg       #+#    #+#             */
/*   Updated: 2023/08/16 18:07:33 by florianverg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
