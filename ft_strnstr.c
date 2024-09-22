/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:26:05 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:14:05 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of the null-terminated string `little`
 *        in the string `big`, where not more than `len` characters are searched.
 *
 * @param big The larger string in which to search.
 * @param little The substring to search for within `big`.
 * @param len The maximum number of characters to search.
 * @return A pointer to the first character of the first occurrence of `little`
 *         in `big`, or NULL if `little` is not found within the first `len`
 *         characters of `big`.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long	i;
	unsigned long	j;

	i = 0;
	if ((len == 0 && !big) || (len == 0 && !little))
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	else
	{
		while (big[i] != '\0' && i < len)
		{
			j = 0;
			while (big[i + j] == little[j] && little[j] != '\0'
				&& (i + j) < len)
			{
				if (little[j + 1] == '\0')
					return ((char *)&big[i]);
				j++;
			}
			i++;
		}
		return (NULL);
	}
}