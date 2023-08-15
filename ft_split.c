/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianverge <florianverge@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:03:16 by florianverg       #+#    #+#             */
/*   Updated: 2023/08/15 20:48:48 by florianverg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(char const *str, char c)
{
    int i;
    int result;

    i = 0;
    result = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i] != c && str[i] != '\0'){
		i++;
		result++;
	}
    return (result);
}

int	custom_strlen(char const *str, char c)
{
	int i = 0;

	while (str[i] != c){
		i++;
	}
	return i;
}

void	allocation(char **buffer, char const *str, char c)
{
	unsigned int	i; // index de s
	unsigned int	j; // index de j
	unsigned int	k; // index de j

	i = 0;
	j = 0;
	while (str[i]){
		k = 0;
		while (str[i] == c)
            i++;
		buffer[j] = malloc(custom_strlen(&str[i], c) + 1);
		
		while (str[i] != c && str[i] != '\0'){
			i++;
			k++;
		}
		ft_strncpy(buffer[j], &str[i - k], k);
		//buffer[j] = ft_strndup(&str[i - k], k);
		j++;
		i++;
	}
}

char **ft_split(char const *s, char c)
{
    char    **buffer;
    unsigned int     len_s;

    len_s = count_words(s, c);
	buffer = (char **)malloc(sizeof(char *) * (len_s + 1));
	if (!buffer)
		return (NULL);
	allocation(buffer, s, c);
	buffer[len_s] = NULL;
    return (buffer);
}