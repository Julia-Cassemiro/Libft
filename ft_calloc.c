/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 00:31:55 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/05/31 08:59:13 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*pont;
	size_t	i;

	i = 0;
	pont = malloc(nmemb * size);
	if (!pont)
		return (NULL);
	while (pont[i] < (nmemb * size))
	{
		pont[i] = 0;
		i++;
	}
	return (pont);
}