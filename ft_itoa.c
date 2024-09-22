/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:18:39 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:04:41 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates the length of the string needed to represent a given number.
 *
 * This function determines the number of characters required to represent
 * the integer `n` as a string, including the sign if the number is negative.
 *
 * @param n The number for which to calculate the string length.
 * @return The total length of the string representation of the number.
 */
static int	alloc_lenght(long n)
{
	int	total_lenght;

	if (n < 0)
	{
		total_lenght = 2;
		n = n * (-1);
	}
	else
		total_lenght = 1;
	while (n / 10 > 0)
	{
		n = n / 10;
		total_lenght++;
	}
	return (total_lenght);
}

/**
 * @brief Checks if a number is negative and updates the buffer accordingly.
 *
 * This function checks if the given number is negative. If it is, the number
 * is converted to its positive counterpart and the first character of the 
 * buffer is set to the minus sign ('-').
 *
 * @param nbr Pointer to the number to be checked and potentially modified.
 * @param buffer Pointer to the buffer where the minus sign will be set if the number is negative.
 */
static void	check_neg(long *nbr, char *buffer)
{
	if (*nbr < 0)
	{
		*nbr = *nbr * (-1);
		buffer[0] = '-';
	}
}

/**
 * @file ft_itoa.c
 * @brief Converts an integer to a null-terminated string.
 *
 * This function takes an integer `n` and converts it to a string representation.
 * The resulting string is dynamically allocated and must be freed by the caller.
 *
 * @param n The integer to be converted to a string.
 * @return A pointer to the newly allocated string representing the integer.
 *         Returns NULL if memory allocation fails.
 */
char	*ft_itoa(int n)
{
	char	*buffer;
	int		lenght;
	int		i;
	long	nbr;

	nbr = n;
	lenght = alloc_lenght(nbr);
	buffer = malloc(lenght + 1);
	if (!buffer)
		return (NULL);
	check_neg(&nbr, buffer);
	i = lenght;
	if (nbr == 0)
		buffer[i - 1] = '0';
	while (nbr > 0)
	{
		buffer[i - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	buffer[lenght] = '\0';
	return (buffer);
}
