/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:21:31 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:08:44 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_putnbr_fd.c
 * @brief Outputs the integer n to the given file descriptor.
 *
 * This function handles the special case of the minimum integer value
 * and recursively prints each digit of the integer.
 *
 * @param n The integer to be printed.
 * @param fd The file descriptor on which to write.
 */
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar_fd(45, fd);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd((n / 10), fd);
	ft_putchar_fd(((n % 10) + 48), fd);
}