/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:03:16 by nope              #+#    #+#             */
/*   Updated: 2023/08/23 16:40:59 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void allocation(char **buffer, char const *s, char c, size_t len_s)
{
    size_t i = 0; // index de s[i]
    size_t j = 0; // index de copie du buffer
    size_t start = 0; 

    while (s[i])
    {
        if (s[i] != c && s[i])
        {
            start = i;
            while (s[i] != c && s[i])
                i++;
        }
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

char **ft_split(char const *s, char c)
{
    size_t len_s = ft_countwords(s, c);
    char **buffer = (char **)ft_calloc(sizeof(char *), (len_s + 1));
    if (!buffer)
        return NULL;
    allocation(buffer, s, c, len_s);
    //buffer[len_s] = NULL;  no need for this line, because we called calloc on the first place my maaaaaaan
    return buffer;
}