/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:21:24 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:23:23 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_putendl_fd.c
 * @brief Outputs a string to the given file descriptor, followed by a newline.
 *
 * This function writes the string `s` to the file descriptor `fd`, and then
 * writes a newline character.
 *
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
