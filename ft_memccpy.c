/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:25:06 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/05/25 10:25:06 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		count;
	char		*dest2;
	const char	*src2;
	char		*ret;
	char		c2;

	count = 0;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	while (count < n)
	{
		c2 = src2[count];
		dest2[count] = src2[count];
		count++;
		if (c2 == (char)c)
		{
			ret = (char *)&dest2[count];
			return (ret);
		}
	}
	return (NULL);
}
