/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:19:18 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:22:01 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes a single element of a linked list.
 *
 * This function takes a pointer to a linked list element and a function pointer
 * to a function that will be used to delete the content of the element. It 
 * applies the delete function to the content of the element and then frees the 
 * memory allocated for the element itself.
 *
 * @param lst Pointer to the linked list element to be deleted.
 * @param del Function pointer to the function used
 * to delete the content of the element.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
