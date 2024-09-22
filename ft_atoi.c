/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:21:52 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 16:59:30 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

/**
/**
 * @brief Converts the initial portion of the string pointed to by str to int.
 *
 * This function parses the C-string str interpreting its content as an 
 * integral number, which is returned as an int value. The function 
 * discards any whitespace characters until the first non-whitespace 
 * character is found. Then, starting from this character, takes an 
 * optional initial plus or minus sign followed by as many numerical 
 * digits as possible, and interprets them as a numerical value.
 *
 * @param str The string to be converted to int.
 * @return The converted integral number as an int. If no valid conversion 
 *         could be performed, it returns zero.
 */
int	ft_atoi(const char *str)
{
	int	i;
	int	polarity;
	int	result;

	i = 0;
	polarity = 1;
	result = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			polarity *= -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		result = (10 * result) + (str[i] - '0');
		i++;
	}
	return (polarity * result);
}
