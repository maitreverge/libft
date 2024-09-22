/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:19:39 by flverge           #+#    #+#             */
/*   Updated: 2024/09/22 17:22:20 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_lstnew_bonus.c
 * @brief Creates a new list element.
 *
 * This function allocates memory for a new list element, initializes its content
 * with the provided value, and sets the next pointer to NULL.
 *
 * @param content The content to initialize the new list element with.
 * @return A pointer to the newly created list element,
 * or NULL if memory allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = (t_list *)malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
