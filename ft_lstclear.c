/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 00:23:13 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/06/02 00:23:17 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*listfree;

	if (!lst)
		return ;
	list = *lst;
	while (list)
	{
		listfree = list;
		list = list->next;
		ft_lstdelone(listfree, del);
	}
	*lst = NULL;
}
