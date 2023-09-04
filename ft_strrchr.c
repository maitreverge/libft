/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:37:49 by nope              #+#    #+#             */
/*   Updated: 2023/09/04 13:16:23 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc_c;
	char			*p_s;
	char			*index;

	p_s = ((char *)s);
	uc_c = ((unsigned char)c);
	index = NULL;
	while (*p_s != '\0')
	{
		if (*p_s == uc_c)
			index = p_s;
		p_s++;
	}
	if (uc_c == '\0')
		return (p_s);
	else
		return (index);
}
