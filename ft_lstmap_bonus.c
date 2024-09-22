/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:19:07 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:06:21 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_lstmap_bonus.c
 * @brief Applies a function to each element of a list and creates a new list.
 *
 * This function iterates over the given list `lst`, applies the function `f`
 * to the content of each element, and creates a new list with the results.
 * If memory allocation fails during the process, the function uses `del` to
 * free the content of the new list and returns NULL.
 *
 * @param lst The address of a pointer to the first element of the list.
 * @param f The function to apply to each element's content.
 * @param del The function to delete the content of an element if needed.
 * @return The new list, or NULL if memory allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}