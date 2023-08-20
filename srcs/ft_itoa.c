/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 22:31:24 by nope              #+#    #+#             */
/*   Updated: 2023/08/20 21:58:29 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// char	*dynamic_alloc(int n)
// {
// 	int digits = 1;
// 	long temp = n;
// 	if (n == 0)
// 		return (ft_calloc(digits, sizeof(char)));
// 	while (temp != 0)
// 	{
//     	temp = temp / 10; // Divide temp by 10
//     	digits++;         // Increment digits count
// 	}
// 	if (n < 0) // allocating regarding if we need a - sign or not
// 		return (ft_calloc(digits + 1, sizeof(char)));
// 	return (ft_calloc(digits, sizeof(char)));
// }

static size_t	dynamic_alloc(int n)
{
	size_t		i;

	i = 1;
	if (n < 0)
		i++;
	while ((n /= 10))
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*buffer;
	long	i;
	long	j;
	long result;
	long number;

	number = n;
	i = 0;
	j = 1000000000; // starts at 1 billion
	buffer = ft_newstr(dynamic_alloc(n));
	if (!buffer)
		return (NULL);
	// Check negative numbers
	if (number <= 0)
	{
		if (number == 0)
		{
			buffer[i] = '0';
			return (buffer);
		}
		buffer[i] = '-';
		number *= -1;
		i++;
	}

	// Skipping to the correct j
	while (j > 0)
	{
		result = number / j;
		if (result != 0)
			break;
		j /= 10;
	}

	// creating the real number
	while (j > 0)
	{
		result = number / j;
		// if (result == 0)
		// 	j /= 10;
		// else
		// {
			buffer[i] = (result) + 48;
			number %= j;
			j /= 10;
			i++;
		// }
	}
	return (buffer);
}