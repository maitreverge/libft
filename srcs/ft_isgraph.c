/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:34:35 by nope              #+#    #+#             */
/*   Updated: 2023/08/21 10:20:09 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isgraph(int c)
{
	if (c > 32 && c <= 126)
		return (1);
	return (0);
}

/*

ft_isgraph = Excludes the space caracter ASCII 32
ft_isprint = Includes it.

*/