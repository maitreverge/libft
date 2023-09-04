/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:35:19 by nope              #+#    #+#             */
/*   Updated: 2023/09/04 13:15:27 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*new_str;

	i = 0;
	if (!str || !str[0])
		return (NULL);
	new_str = ft_strdup(str);
	if (ft_islower(new_str[i]) == 1)
		new_str[i] -= 32;
	while (new_str[i])
	{
		if (ft_isalnum(new_str[i - 1]) == 0 && ft_islower(new_str[i]))
			new_str[i] -= 32;
		else if (ft_isalnum(new_str[i - 1]) == 1 && ft_isupper(new_str[i]))
			new_str[i] += 32;
		i++;
	}
	return (new_str);
}

/*
I decided to create a new substring with ft_strdup to avoid potential conflicts
if others process relies on the original string.
*/