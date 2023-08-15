/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianverge <florianverge@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:03:41 by florianverg       #+#    #+#             */
/*   Updated: 2023/08/14 11:37:35 by florianverg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c);

int main (void)
{
   char const *s = "Salut bande de coquines !";
   char c = ' ';

   char **result = ft_split(s, c);
   for(int i = 0; i < 5; i++){
    printf("Buffer[%i] = %s", i, result[i]);
   }
}