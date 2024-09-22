/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:21:37 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:08:55 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a string to the specified file descriptor.
 *
 * This function writes the string 's' to the file descriptor 'fd'.
 * If the string is NULL, the function does nothing.
 *
 * @param s The string to be written.
 * @param fd The file descriptor on which to write.
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}