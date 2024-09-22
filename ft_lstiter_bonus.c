/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:19:25 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:05:54 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_lstiter_bonus.c
 * @brief Iterates over a list and applies a function to each element.
 *
 * This function takes a pointer to the first element of a list and a function
 * pointer. It applies the function to the content of each element in the list.
 *
 * @param lst A pointer to the first element of the list.
 * @param f A function pointer to apply to each element's content.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
