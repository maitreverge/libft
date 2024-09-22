/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:24:09 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:13:39 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_strmapi.c
 * @brief Applies a function to each character of a string to create a new string.
 *
 * This function takes a string `s` and applies the function `f` to each character
 * of the string, passing the character's index and the character itself to `f`.
 * The result is stored in a newly allocated string which is returned.
 *
 * @param s The input string to be transformed.
 * @param f The function to apply to each character of the string.
 * @return A new string with each character modified by the function `f`, or NULL if allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*buffer;
	int		i;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	i = 0;
	buffer = ft_calloc(len_s + 1, 1);
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, s, len_s);
	while (s[i])
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	return (buffer);
}