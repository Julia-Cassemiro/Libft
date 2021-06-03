/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 22:34:22 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/06/02 22:21:37 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Takes as a parameter an element and frees the
// memory of the element’s content using the function
// ’del’ given as a parameter and free the element.
// The memory of ’next’ must not be freed.


void	ft_lstdelone(t_list *lst, void (*del)(void *)) //dell its a function
{
	t_list	*list;

	list = lst;
	if (!list)
		return ;
	del(list->content); //frees the memory of the element’s content using the function ’del’
	free(list); //memory must be freed
}
