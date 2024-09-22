/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:19:11 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:05:21 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_lstclear_bonus.c
 * @brief Clears and frees the entire list.
 *
 * This function iterates through the list pointed to by `lst`, applying the
 * function `del` to the content of each element, and then frees the element.
 * The pointer to the list is set to NULL after the list is cleared.
 *
 * @param lst A pointer to the pointer to the first element of the list.
 * @param del A function pointer to a function used to delete the content of an element.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}
