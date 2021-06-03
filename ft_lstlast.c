/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 21:54:20 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/06/02 22:11:44 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Returns the last element of the list.

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*list;

	list = lst;
	if (!list) //if is null
		return (0);
	while (list->next != NULL) //while next dont apoint for null
		list = list->next; //loop
	return (list);
}
