/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 00:23:13 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/06/02 22:25:30 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Deletes and frees the given element and every
// successor of that element, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to
// NULL.

void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	t_list	*list;

	if (*lst == NULL)
		return ;
	while (*lst)
	{
		list = (*lst)->next; //loop for deleted the element and every successor
		ft_lstdelone(*lst, del); //using the function ’del’ and free
		*lst = list;
	}
	*lst = NULL; //the pointer to the list must be set to NULL
}
