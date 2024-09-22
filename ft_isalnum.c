/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:22:35 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:01:32 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_isalnum.c
 * @brief Checks if the given character is alphanumeric.
 *
 * This function checks if the input character is either an alphabetic letter
 * (a-z, A-Z) or a digit (0-9). It returns 1 if the character is alphanumeric,
 * and 0 otherwise.
 *
 * @param c The character to be checked.
 * @return 1 if the character is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == 1) || (ft_isdigit(c) == 1))
		return (1);
	return (0);
}