/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:21:00 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:08:21 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_putchar_fd.c
 * @brief Outputs the character 'c' to the given file descriptor.
 *
 * This function writes the character 'c' to the file descriptor specified by 'fd'.
 *
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}