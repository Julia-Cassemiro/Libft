/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 22:10:51 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/06/02 22:17:48 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Adds the element ’new’ at the end of the list.

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!new) //if new is null, return
		return ;
	if (!*lst) //if is null
	{
		*lst = new; //first is new
		return ;
	}
	list = ft_lstlast(*lst); //lstlast return the last element at the end of the lst
	list->next = new; //the last element appoint for new
}
