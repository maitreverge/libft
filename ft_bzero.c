/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:22:01 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:19:33 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets the first n bytes of the area
 * starting at s to zero
 * (bytes containing '\0').
 *
 * This function uses ft_memset to set the memory area to zero.
 *
 * @param s Pointer to the memory area to be zeroed.
 * @param n Number of bytes to be set to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
