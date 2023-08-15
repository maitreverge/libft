/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianverge <florianverge@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:03:16 by florianverg       #+#    #+#             */
/*   Updated: 2023/08/15 18:45:47 by florianverg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(char const *str, char c)
{
    int i;
    int result;

    i = 0;
    result = 0;
    
    while (str[i] != '\0'){
        while (str[i] == c && str[i + 1] == c){
            i++;
        }
		if (str[i] != c){
			result++;
			while (str[i] != c && str[i] != '\0'){
				i++;
			}
		}
		i++;
    }
    return (result);
}

void	allocation(char **buffer, char const *str, char c)
{
	int	i; // index de s
	int	j; // index de j
	int	k; // index de j

	i = 0;
	j = 0;
	while (str[i] != '\0'){
		while (str[i] == c){
            i++;
		}
		k = 0;
		while (str[i] != c && str[i + 1] != '\0'){
			i++;
			k++;
		}
		buffer[j] = ft_strndup(&str[i - k], k);
		j++;
		i++;
	}
}

char **ft_split(char const *s, char c)
{
    char    **buffer;
    int     len_s;

    len_s = count_words(s, c);
	buffer = (char **)malloc(sizeof(char *) * (len_s + 1));
	if (!buffer)
		return (NULL);
	allocation(buffer, s, c);
	buffer[len_s] = NULL;
    return (buffer);
}