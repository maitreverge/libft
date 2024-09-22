/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:23:43 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:13:27 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the length of the string s.
 *
 * This function counts the number of characters in the string pointed to by s,
 * excluding the terminating null byte ('\0').
 *
 * @param s Pointer to the null-terminated string to be measured.
 * @return The number of characters in the string s.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
