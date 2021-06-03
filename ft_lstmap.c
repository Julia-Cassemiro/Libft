/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:38:56 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/06/02 22:38:15 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Iterates the list ’lst’ and applies the function
// ’f’ to the content of each element. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of an element if needed.


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	new = ft_lstnew(f(lst->content)); //applies the function ’f’ to the content of each element
	if (new == NULL) //if malloc broke
	{
		ft_lstclear(&new, del); //The ’del’ function is used to delete the content of an element if needed
		return (NULL);
	}
	new->next = ft_lstmap(lst->next, f, del); //loop
	return (new);
}
