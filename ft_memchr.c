/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:20:07 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:07:05 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Scans the initial n bytes of the memory area pointed to by s 
 *        for the first instance of c.
 *
 * @param s Pointer to the memory area to be scanned.
 * @param c Value to be located. The value is passed as an int, but it is 
 *          internally converted to an unsigned char.
 * @param n Number of bytes to be analyzed.
 * @return A pointer to the matching byte or NULL if the character does not 
 *         occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*p_s;
	unsigned char	uc_c;

	p_s = ((unsigned char *)s);
	uc_c = ((unsigned char)c);
	i = 0;
	while (i < n)
	{
		if (*p_s == uc_c)
			return (p_s);
		i++;
		p_s++;
	}
	return (NULL);
}