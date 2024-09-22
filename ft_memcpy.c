/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:20:19 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:22:58 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory area dst.
 *
 * This function copies n bytes from the memory area pointed to by src
 * to the memory area pointed to by dst. The memory areas must not overlap.
 * If either dst or src is NULL, the function returns NULL.
 *
 * @param dst Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n Number of bytes to copy.
 * @return Pointer to the destination memory area (dst),
 * or NULL if dst and src are both NULL.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
