/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianverge <florianverge@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:03:16 by florianverg       #+#    #+#             */
/*   Updated: 2023/08/10 13:43:33 by florianverg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int total_len(char const *str, char c)
{
    int i;
    int result;

    i = 0;
    result = 0;
    while (str[i]){
        if(str[i] == c && str[i + 1] != '\0')
            result++;
        i++;
    }    
}

char **ft_split(char const *s, char c)
{
    char **buffer;
    int len_s;
    
    len_s = total_len(s, c);    
    buffer = malloc(sizeof(char *) * len_s)
} 