/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:35:26 by nope              #+#    #+#             */
/*   Updated: 2023/08/31 19:41:25 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*result(char *haystack_low, char *needle_low, const char *haystack)
{
	int	i;
	int	j;

	i = 0;
	while (haystack_low[i])
	{
		j = 0;
		while (haystack_low[i + j] == needle_low[j] && needle_low[j])
		{
			if (needle_low[j + 1] == '\0')
			{
				free(haystack_low);
				free(needle_low);				
				return ((char *)&haystack[i]);
			}
			j++;
		}
		i++;
	}
	free(haystack_low);
	free(needle_low);	
	return (NULL);
}


char	*ft_strcasestr(const char *haystack, const char *needle)
{
	char	*haystack_low;
	char	*needle_low;
	// unsigned long	i;
	// unsigned long	j;

	// i = 0;
	if (!haystack || !needle)
		return (NULL);
	if (!needle)
		return ((char *)haystack);
	haystack_low = ft_strdup(haystack);
	needle_low = ft_strdup(needle);
	ft_strlowcase(haystack_low);
	ft_strlowcase(needle_low);
	// while (haystack_low[i])
	// {
	// 	j = 0;
	// 	while (haystack_low[i + j] == needle_low[j] && needle_low[j])
	// 	{
	// 		if (needle_low[j + 1] == '\0')
	// 		{
	// 			free(haystack_low);
	// 			free(needle_low);				
	// 			return ((char *)&haystack[i]);
	// 		}
	// 		j++;
	// 	}
	// 	i++;
	// }
	// free(haystack_low);
	// free(needle_low);	
	// return (NULL);
	return (result(haystack_low, needle_low, haystack));
}

/*

Does the same job than strstr, with the needle non case sensitive

*/