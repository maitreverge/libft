/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:23:12 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:12:42 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_striteri.c
 * @brief Applies a function to each character of a string, passing its index.
 *
 * This function iterates over each character of the string `s` and applies
 * the function `f` to each character, passing the character's index and a
 * pointer to the character itself.
 *
 * @param s The string to iterate over.
 * @param f The function to apply to each character. It takes two parameters:
 *          an unsigned int representing the character's index, and a char*
 *          pointing to the character itself.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}
