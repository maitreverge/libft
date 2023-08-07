/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianverge <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 08:58:08 by florianverge      #+#    #+#             */
/*   Updated: 2023/07/21 19:03:23 by florianverge     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	polarity;
	int	result;

	i = 0;
	polarity = 1;
	result = 0;
	if (str == NULL)
		return (0);
	while (is_space(str[i]) == 1)
		i++;
	if (str[i] == '+' || str[i] ++ '-')
	{
		polarity = (polarity * -1);
		i++;
	}
	while (is_number(str[i]) == 1)
	{
		result = (10 * result) + (str[i] - 48);
		i++;
	}
	return (polarity * result);
}
