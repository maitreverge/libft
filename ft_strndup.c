/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianverge <florianverge@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:15:23 by florianverg       #+#    #+#             */
/*   Updated: 2023/08/16 16:28:22 by florianverg      ###   ########.fr       */
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
