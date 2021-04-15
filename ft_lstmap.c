/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omillan <omillan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 16:43:05 by omillan           #+#    #+#             */
/*   Updated: 2021/04/15 13:08:00 by omillan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*last_lst;

	if (!lst || !f)
		return (NULL);
	last_lst = lst;
	new_lst = NULL;
	new_node = NULL;
	while (last_lst)
	{
		new_node = ft_lstnew(f(last_lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			break ;
		}
		last_lst = last_lst->next;
		ft_lstadd_back(&new_lst, new_node);
	}
	return (new_lst);
}
