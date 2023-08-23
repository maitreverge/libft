/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:35:23 by nope              #+#    #+#             */
/*   Updated: 2023/08/23 20:38:58 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strcasecmp(char *s1, char *s2)
{
	char	*low_s1;
	char	*low_s2;
	int		result;

	if (!s1 || !s2)
		return (0);
	low_s1 = ft_calloc(ft_strlen(s1) + 1, 1);
	low_s2 = ft_calloc(ft_strlen(s2) + 1, 1);
	if (!low_s1 || !low_s2)
		return (-1);
	ft_strncpy(low_s1, s1, ft_strlen(s1));
	ft_strncpy(low_s2, s2, ft_strlen(s2));
	low_s1 = ft_strlowcase(low_s1);
	low_s2 = ft_strlowcase(low_s2);
	result = ft_strcmp(low_s1, low_s2);
	free(low_s1);
	free(low_s2);
	return (result);
}
