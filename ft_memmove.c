/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 17:51:35 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/05/19 17:51:35 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*s_dst;
	const unsigned char	*s_src;
	int					i;

	s_dst = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	if (s_dst > s_src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(s_dst + i) = *(char *)(s_src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(s_dst + i) = *(char *)(s_src + i);
			i++;
		}
	}
	return (s_dst);
}
