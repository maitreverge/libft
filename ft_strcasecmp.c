/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:35:23 by nope              #+#    #+#             */
/*   Updated: 2023/09/05 12:06:33 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_strcasecmp(char *s1, char *s2)
// {
// 	char	*low_s1;
// 	char	*low_s2;
// 	int		result;

// 	if (!ft_strlen(s1))
// 		return (-1);
// 	if (!ft_strlen(s2))
// 		return (1);
// 	low_s1 = ft_calloc(ft_strlen(s1) + 1, 1);
// 	low_s2 = ft_calloc(ft_strlen(s2) + 1, 1);
// 	if (!low_s1 || !low_s2)
// 		return (-1);
// 	ft_strncpy(low_s1, s1, ft_strlen(s1));
// 	ft_strncpy(low_s2, s2, ft_strlen(s2));
// 	low_s1 = ft_strlowcase(low_s1);
// 	low_s2 = ft_strlowcase(low_s2);
// 	result = ft_strcmp(low_s1, low_s2);
// 	free(low_s1);
// 	free(low_s2);
// 	return (result);
// }

int ft_strcasecmp(const char *s1, const char *s2)
{
    if (!s1 || !s2)
        return 0;
    while (*s1 && *s2)
    {
        char c1 = ft_tolower(*s1);
        char c2 = ft_tolower(*s2);
        
        if (c1 < c2)
            return -1;
        else if (c1 > c2)
            return 1;

        s1++;
        s2++;
    }

    if (*s1 == '\0' && *s2 != '\0')
        return -1;
    else if (*s1 != '\0' && *s2 == '\0')
        return 1;

    return 0;
}
