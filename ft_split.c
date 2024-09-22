/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:21:44 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:24:24 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies up to n characters from the string src to dest.
 *
 * This function copies at most n characters from src to dest. If src is less
 * than n characters long, the remainder of dest is filled with '\0' characters.
 * Otherwise, dest is not null-terminated.
 *
 * @param dest The destination buffer where the content is to be copied.
 * @param src The source string from which to copy characters.
 * @param n The maximum number of characters to copy from src.
 * @return A pointer to the destination string dest.
 */
static char	*ft_strncpy(char *dest, char const *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 * @brief Checks and updates the start and end indices of a substring.
 *
 * This function skips over any leading delimiter characters in the input string
 * and then identifies the start and end indices of the next substring that is
 * not separated by the delimiter.
 *
 * @param s The input string to be checked.
 * @param c The delimiter character.
 * @param i Pointer to the current index in the string. This will be updated to
 *          the end of the identified substring.
 * @param start Pointer to the start index of the identified substring.
 */
static void	sub_check(char const *s, char c, size_t *i, size_t *start)
{
	while (s[*i] == c)
		(*i)++;
	if (s[*i] != c && s[*i])
	{
		*start = *i;
		while (s[*i] != c && s[*i])
			(*i)++;
	}
}

/**
 * @brief Allocates and fills a buffer with substrings from the input string.
 *
 * This function splits the input string `s`
 * into substrings based on the delimiter `c`
 * and stores them in the `buffer`.
 * The number of substrings is limited by `len_s`.
 *
 * @param buffer A pointer to an array of strings
 * where the substrings will be stored.
 * @param s The input string to be split.
 * @param c The delimiter character used to split the input string.
 * @param len_s The maximum number of substrings to store in the buffer.
 */
static void	allocation(char **buffer, char const *s, char c, size_t len_s)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
	if (!s)
		return ;
	while (s[i])
	{
		sub_check(s, c, &i, &start);
		if (j < len_s)
		{
			buffer[j] = ft_calloc(sizeof(char), (i - start + 1));
			if (!buffer[j])
				return ;
			ft_strncpy(buffer[j], &s[start], i - start);
			j++;
		}
		while (s[i] == c && s[i])
			i++;
	}
}

/**
 * @brief Counts the number of words in a string separated by a given delimiter.
 *
 * This function takes a string and a delimiter character as input and returns
 * the number of words in the string.
 * Words are defined as sequences of characters
 * separated by the delimiter.
 *
 * @param str The input string to be scanned.
 * @param c The delimiter character used to separate words.
 * @return The number of words in the input string.
 */
static size_t	ft_countwords(char const *str, char c)
{
	size_t	result;
	int		i;

	result = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
		{
			result++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (result);
}

/**
 * @brief Splits a string into an array of substrings based on a delimiter.
 *
 * This function takes a string `s` and a delimiter character `c`, and splits
 * the string into an array of substrings. Each substring is separated by the
 * delimiter character. The resulting array is dynamically allocated and must
 * be freed by the caller.
 *
 * @param s The input string to be split.
 * @param c The delimiter character used to split the string.
 * @return A pointer to an array of substrings,
 * or NULL if memory allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	char	**buffer;
	size_t	len_s;

	len_s = ft_countwords(s, c);
	buffer = (char **)ft_calloc(sizeof(char *), (len_s + 1));
	if (!buffer)
		return (NULL);
	allocation(buffer, s, c, len_s);
	return (buffer);
}
