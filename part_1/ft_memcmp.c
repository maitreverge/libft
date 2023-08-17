/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 10:44:38 by nope              #+#    #+#             */
/*   Updated: 2023/08/17 13:38:26 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
