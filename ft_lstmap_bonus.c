/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:23:01 by nope              #+#    #+#             */
/*   Updated: 2023/09/05 13:24:53 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void(*del) (void *))
{
	t_list	*nlst;
	t_list	*tmp;

	nlst = NULL;
	while (lst)
	{
	tmp = ft_lstnew(f(lst->content));
		if (!tmp)
			return (NULL);
		ft_lstadd_back(&nlst, tmp);
	lst = lst->next;
	}
	ft_lstclear(&lst, del);
	return (nlst);
}
