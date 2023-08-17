/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:54:33 by nope              #+#    #+#             */
/*   Updated: 2023/08/17 13:40:00 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start > len_s)
		return (ft_strdup(""));
	if (start == 0 && len >= len_s)
		return (ft_strdup(s));
	if (len_s <= len)
		return (NULL);
	if (start + len > len_s)
		return (NULL);
	buffer = (char *)ft_calloc(len + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	ft_memcpy(buffer, &s[start], len);
	buffer[len] = '\0';
	return (buffer);
}
