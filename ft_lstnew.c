/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 17:07:57 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/06/02 22:36:17 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Allocates (with malloc(3)) and returns a new
//element. The variable ’content’ is initialized
//with the value of the parameter ’content’. The
//variable ’next’ is initialized to NULL.

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (malloc(sizeof(t_list))); //we do this to return the new element
	if (!list) //if malloc goes wrong, and is null
		return (NULL);
	list->content = content; //our space made by malloc, is pointing to the content
	list->next = NULL; //the variable ’next’ is initialized to NULL.
	return (list);
}
