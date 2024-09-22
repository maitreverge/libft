/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:23:29 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:13:04 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates the string src to the end of dst, ensuring the result is null-terminated.
 *
 * This function appends the null-terminated string src to the end of dst. It will append at most
 * dstsize - strlen(dst) - 1 characters. It will then null-terminate the result.
 *
 * @param dst The destination string to which src will be appended.
 * @param src The source string to be appended to dst.
 * @param dstsize The full size of the destination buffer.
 * @return The total length of the string it tried to create, which is the initial length of dst plus the length of src.
 *         If the return value is >= dstsize, the output string has been truncated.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	j = ft_strlen(dst);
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize <= len_dest)
		return (dstsize + len_src);
	while (i < (dstsize - len_dest - 1) && src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (len_dest + len_src);
}
