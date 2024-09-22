/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:26:58 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:15:58 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is a lowercase letter.
 *
 * This function checks if the given character `c` is a lowercase letter
 * (from 'a' to 'z').
 *
 * @param c The character to check.
 * @return 1 if the character is a lowercase letter, 0 otherwise.
 */
static int	ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

/**
 * @file ft_toupper.c
 * @brief Converts a lowercase letter to uppercase.
 *
 * This function checks if the given character is a lowercase letter.
 * If it is, the function converts it to the corresponding uppercase letter.
 *
 * @param c The character to be converted.
 * @return The uppercase equivalent of the character if it is lowercase;
 *         otherwise, the character itself.
 */
int	ft_toupper(int c)
{
	if (ft_islower(c) == 1)
		c -= 32;
	return (c);
}
