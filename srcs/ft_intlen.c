/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:18:53 by nope              #+#    #+#             */
/*   Updated: 2023/08/20 18:48:31 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	recursive_intlen(int i, int factor)
{
	if (i / (factor) > 0)
		return (ft_strlen(ft_itoa(factor)));
	return (recursive_intlen(i, factor / 10));
}

int	ft_intlen(int i)
{
	int	factor;
	
	factor = 100000000;
	
	return (recursive_intlen(ft_abs(i), factor));
}

/*

	Function to test once ft_itoa will be done

	#include <stdio.h>
#include <stdlib.h>

int	ft_abs(int c)
{
	if (c < 0)
		return (-c);
	return (c);
}

int	recursive_intlen(int i, int factor)
{
	if (i / (factor) > 0)
		return (ft_strlen(ft_itoa(factor)));
	return (recursive_intlen(i, factor / 10));
}

int	ft_intlen(int i)
{
	int	factor;
	
	factor = 100000000;
	
	return (recursive_intlen(ft_abs(i), factor));
}

int	main(int ac, char **av)
{
	if (ac >1)
	{
	printf("Result of %i = %i", atoi(av[1]), ft_intlen(atoi(av[1])));
	}
	else
	printf("Wrong usage");
}
	
*/