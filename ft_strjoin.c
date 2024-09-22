/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:23:19 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:12:50 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Joins two strings into a new string.
 *
 * This function allocates (with ft_calloc) and returns a new string,
 * which is the result of the concatenation of 's1' and 's2'.
 *
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 * @return A new string which is the result of the concatenation of 's1' and 's2',
 *         or NULL if the allocation fails or if either 's1' or 's2' is NULL.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;
	int		len_s1;
	int		len_s2;
	int		total_len;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	total_len = len_s1 + len_s2 + 1;
	buffer = (char *)ft_calloc(total_len, sizeof(char));
	if (!buffer)
		return (NULL);
	ft_memcpy(buffer, s1, len_s1);
	ft_memcpy(&buffer[len_s1], s2, len_s2);
	buffer[len_s1 + len_s2] = '\0';
	return (buffer);
}
