/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 22:48:25 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/06/02 22:03:58 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Adds the element ’new’ at the beginning of the list.

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ; //if new is null, return
	if (!*lst) //if the first is null
	{
		*lst = new; //first is new
		return ;
	}
	new->next = *lst; //else, new -> next is the first in lst
	*lst = new;
}
