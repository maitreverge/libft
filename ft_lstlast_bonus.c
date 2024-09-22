/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:19:32 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:06:05 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last element of the list.
 *
 * This function traverses the linked list until it finds the last element,
 * which is then returned. If the list is empty, it returns NULL.
 *
 * @param lst The beginning of the list.
 * @return The last element of the list, or NULL if the list is empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
