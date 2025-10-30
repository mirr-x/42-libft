/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:40:15 by molahrac          #+#    #+#             */
/*   Updated: 2025/10/29 23:10:29 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*create_node(void *content, void *(*f)(void *), void (*del)(void *))
{
	void	*new_content;
	t_list	*new_node;

	new_content = f(content);
	new_node = ft_lstnew(new_content);
	if (!new_node)
	{
		del(new_content);
		return (NULL);
	}
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*cur;
	t_list	*head;

	if (!lst)
		return (NULL);
	head = create_node(lst->content, f, del);
	if (!head)
		return (NULL);
	cur = head;
	lst = lst->next;
	while (lst != NULL)
	{
		new_node = create_node(lst->content, f, del);
		if (!new_node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		cur->next = new_node;
		cur = cur->next;
		lst = lst->next;
	}
	return (head);
}
