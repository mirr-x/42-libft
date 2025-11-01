/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molahrac <molahrac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:13:53 by molahrac          #+#    #+#             */
/*   Updated: 2025/11/01 15:09:49 by molahrac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* clear the full LinkedList */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;
	t_list	*tmp;

	if (!lst)
		return ;
	head = *lst;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
