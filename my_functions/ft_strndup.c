/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:15:23 by nope              #+#    #+#             */
/*   Updated: 2023/08/16 23:52:25 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*buffer;

	buffer = ft_newstr(n);
	if (!buffer)
		return (NULL);
	ft_strncpy(buffer, s1, n);
	return (buffer);
}
