/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 22:28:07 by nope              #+#    #+#             */
/*   Updated: 2023/08/29 19:47:17 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*buffer;
	int		i;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	i = 0;
	buffer = ft_calloc(len_s + 1, 1);
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, s, len_s);
	while (s[i])
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	return (buffer);
}
