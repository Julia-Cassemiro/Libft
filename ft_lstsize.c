/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:44:21 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/06/02 22:08:45 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Returns the last element of the list.
int	ft_lstsize(t_list *lst)
{
	size_t		i;
	t_list		*list;

	list = lst;
	i = 0;
	while (list)
	{
		list = list->next; //loop that reaches the last position
		i++;
	}
	return (i); //i going show for the last
}
