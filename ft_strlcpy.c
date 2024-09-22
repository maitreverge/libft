/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:23:36 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:13:16 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies up to dstsize - 1 characters from the string src to dst, 
 *        NUL-terminating the result if dstsize is not 0.
 *
 * @param dst The destination buffer where the content is to be copied.
 * @param src The source string from which to copy characters.
 * @param dstsize The size of the destination buffer.
 * @return The total length of the string src.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
