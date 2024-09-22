/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:22:41 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:01:58 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

static int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/**
 * @file ft_isalpha.c
 * @brief Checks if the given character is an alphabetic character.
 *
 * This function checks if the input character `c` is an alphabetic character
 * by verifying if it is either a lowercase or an uppercase letter.
 *
 * @param c The character to be checked.
 * @return 1 if the character is alphabetic, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if (ft_islower(c) == 1 || ft_isupper(c) == 1)
		return (1);
	return (0);
}
