/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:15:17 by nope              #+#    #+#             */
/*   Updated: 2023/09/05 14:20:30 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int c)
{
	if (c > FT_INT_MAX || c <= FT_INT_MIN)
		return (0);
	if (c < 0)
		return (-c);
	else
		return (c);
}
