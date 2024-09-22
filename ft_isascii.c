/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:22:47 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:21:25 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_isascii.c
 * @brief Checks if a character is an ASCII character.
 *
 * This function tests whether the given integer corresponds
 * to an ASCII character.
 *
 * @param c The integer to be tested.
 * @return 1 if the integer is an ASCII character, 0 otherwise.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
