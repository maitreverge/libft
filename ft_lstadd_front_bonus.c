/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:19:05 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:21:49 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a new element at the beginning of the list.
 *
 * This function takes a pointer to the first element
 * of a list and a new element,
 * and inserts the new element at the beginning of the list.
 *
 * @param lst A double pointer to the first element of the list.
 * @param new A pointer to the new element to be added to the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
