/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:03:16 by nope              #+#    #+#             */
/*   Updated: 2023/08/16 23:53:32 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function to count the number of words in a string
unsigned int count_words(char const *s, char c)
{
    unsigned int count = 0;
    int is_word = 0;

    while (*s)
    {
        if (*s != c)
        {
            if (!is_word)
            {
                is_word = 1;
                count++;
            }
        }
        else
            is_word = 0;
        s++;
    }

    return count;
}

// Function to allocate memory and populate the buffer array
void allocation(char **buffer, char const *s, char c)
{
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int start = 0;

    while (s[i])
    {
        if (s[i] != c)
        {
            if (start == 0)
                start = i;
        }
        else
        {
            if (start != 0)
            {
                buffer[j] = (char *)malloc(sizeof(char) * (i - start + 1));
                ft_strncpy(buffer[j], s + start, i - start);
                buffer[j][i - start] = '\0';
                j++;
                start = 0;
            }
        }
        i++;
    }
    if (start != i)
    {
        buffer[j] = (char *)malloc(sizeof(char) * (i - start + 1));
        ft_strncpy(buffer[j], s + start, i - start);
        buffer[j][i - start] = '\0';
		j++;
    }
}
// Function to split a string into an array of substrings
char **ft_split(char const *s, char c)
{
    unsigned int len_s = count_words(s, c);
    char **buffer = (char **)malloc(sizeof(char *) * (len_s + 1));
    if (!buffer)
        return NULL;
    allocation(buffer, s, c);
    buffer[len_s] = NULL;
    return buffer;
}