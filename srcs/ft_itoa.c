/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 22:31:24 by nope              #+#    #+#             */
/*   Updated: 2023/08/23 17:43:30 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	dynamic_alloc(int n)
{
	size_t		i;

	i = 1;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*alloc_check(char *buffer, long *number, long *i)
{
	if (*number <= 0)
	{
		if (*number == 0)
		{
			buffer[*i] = '0';
			return (buffer);
		}
		buffer[*i] = '-';
		*(number) *= -1;
		(*i)++;
	}
	return (buffer);
}

static void	correct_j(long *j, long *number)
{
	while (*j > 0)
	{
		if (*number / *j != 0)
			break ;
		(*j) /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*buffer;
	long	i;
	long	j;
	long	number;

	number = n;
	i = 0;
	j = 1000000000;
	buffer = ft_newstr(dynamic_alloc(n));
	if (!buffer)
		return (NULL);
	alloc_check(buffer, &number, &i);
	correct_j(&j, &number);
	while (j > 0)
	{
		buffer[i] = (number / j) + '0';
		number %= j;
		j /= 10;
		i++;
	}
	return (buffer);
}
