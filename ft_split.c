/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianverge <florianverge@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:03:16 by florianverg       #+#    #+#             */
/*   Updated: 2023/08/14 11:51:03 by florianverg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int total_len(char const *str, char c)
{
    int     i;
    int     result;

    i = 0;
    result = 0;
    while (str[i]){
        if(str[i] == c && str[i + 1] != '\0' && str[i + 1] != c)
            result++;
        i++;
    }    
    return (result);
}

char    *allocation(char const *s, int c, int *i)
{
    char    *mini_buffer;
    int     j;

    j = 0;
    while (s[*(i)] && s[*(i)] != c){
        (*i)++;
        j++;
    }
    mini_buffer = (char *)malloc(j + 1);
    if (!mini_buffer)
        return (NULL);
    mini_buffer = ft_memcpy(mini_buffer, &s[*(i)], j);
    mini_buffer[j + 1] = '\0';
    return (mini_buffer);
}

char **ft_split(char const *s, char c)
{
    char    **buffer;
    int     len_s;
    int     i; // index de s
    int     j; // index de buffer
    
    i = 0;
    j = 0;
    len_s = total_len(s, c);
    buffer = (char **)malloc(sizeof(char *) * len_s + 1);
    if (!buffer)
        return (NULL);
    while (s[i]){
        buffer[j] = allocation(s, c, &i);
        j++;
    }
    buffer[len_s + 1] = NULL;
    return (buffer);
}

int main (void)
{
   char const *s = "Salut bande de coquines !";
   char c = ' ';

   char **result = ft_split(s, c);
   for(int i = 0; i < 5; i++){
    printf("Buffer[%i] = %s", i, result[i]);
   }
}
