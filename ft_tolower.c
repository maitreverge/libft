/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:26:50 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:15:36 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is an uppercase letter.
 *
 * This function checks if the given character is an uppercase letter
 * (from 'A' to 'Z' in ASCII).
 *
 * @param c The character to be checked.
 * @return 1 if the character is an uppercase letter, 0 otherwise.
 */
static int	ft_isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

/**
 * @file ft_tolower.c
 * @brief Converts an uppercase letter to its lowercase equivalent.
 *
 * This function checks if the given character is an uppercase letter.
 * If it is, the function converts it to the corresponding lowercase letter.
 *
 * @param c The character to be converted.
 * @return The lowercase equivalent of the character if it is uppercase;
 *         otherwise, the character itself.
 */
int	ft_tolower(int c)
{
	if (ft_isupper(c) == 1)
		c += 32;
	return (c);
}
