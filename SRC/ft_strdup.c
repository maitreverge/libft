/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:26:27 by nope              #+#    #+#             */
/*   Updated: 2023/08/17 13:38:47 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buffer;
	int		len_s1;

	len_s1 = ft_strlen(s1);
	buffer = (char *)malloc(len_s1 + 1);
	if (!buffer)
		return (NULL);
	ft_memcpy(buffer, s1, len_s1);
	buffer[len_s1] = '\0';
	return (buffer);
}
