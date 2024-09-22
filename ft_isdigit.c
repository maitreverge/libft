/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:23:10 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:02:32 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_isdigit.c
 * @brief Checks if the given character is a digit.
 *
 * This function takes an integer as input and checks if it corresponds
 * to an ASCII digit character ('0' to '9'). If the character is a digit,
 * the function returns 1. Otherwise, it returns 0.
 *
 * @param c The character to be checked.
 * @return 1 if the character is a digit, 0 otherwise.
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
