/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianverge <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:44:14 by florianverge      #+#    #+#             */
/*   Updated: 2023/07/04 12:46:22 by florianverge     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long i;
	unsigned long j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	else
	{
		while (haystack[i] != '\0' && i < len)
		{
			j = 0;
			while (haystack[i + j] == needle[j] && needle[j] != '\0' && (i + j) < len)
			{
				if (needle[j + 1] == '\0')
				{
					return ((char *)&haystack[i]);
				}
				j++;
			}
			i++;
		}
		return (NULL);
	}
}
