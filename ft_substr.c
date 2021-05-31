/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:35:31 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/05/27 19:13:34 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	s_len;
	char	*str;

	s_len = ft_strlen(s);
	if (len < s_len)
	{
		str = malloc(sizeof(char) *(s_len + 1));
	}
	else
		str = malloc(sizeof(char) *(len + 1));
	count = 0;
	if (start < (unsigned int)(str))
	{
		while (s[start + count] && count < len)
		{
			str[count] = s[start + count];
			count++;
		}
	}
	str[count] = '\0';
	return (str);
}
