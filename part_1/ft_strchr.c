/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:23:40 by nope              #+#    #+#             */
/*   Updated: 2023/08/16 23:53:27 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*p_s;
	unsigned long	i;
	unsigned char	uc_c;

	p_s = ((char *)s);
	uc_c = ((unsigned char)c);
	i = 0;
	while (*p_s != '\0')
	{
		if (*p_s == uc_c)
			return (p_s);
		i++;
		p_s++;
	}
	if (uc_c == '\0')
		return (p_s);
	else
		return (NULL);
}
