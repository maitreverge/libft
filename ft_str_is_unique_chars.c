/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_unique_chars.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:15:35 by nope              #+#    #+#             */
/*   Updated: 2023/09/04 13:15:22 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_unique_chars(char *str)
{
	int	i;
	int	j;
	int	len_str;

	if (!str)
		return (0);
	i = 0;
	len_str = ft_strlen(str);
	if (len_str == 1)
		return (1);
	while (str[i])
	{
		j = i + 1;
		while (j < len_str)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
