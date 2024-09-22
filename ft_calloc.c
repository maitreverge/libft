/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:22:14 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:17:20 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory for an array of elements and initializes it to zero.
 *
 * This function allocates memory for an array of `count` elements, each of 
 * `size` bytes, and initializes all bytes in the allocated memory to zero.
 *
 * @param count The number of elements to allocate.
 * @param size The size of each element in bytes.
 * @return A pointer to the allocated memory, or NULL if the allocation fails.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;

	buffer = malloc(size * count);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, size * count);
	return (buffer);
}
