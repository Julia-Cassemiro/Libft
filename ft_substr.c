/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:35:31 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/05/31 19:04:47 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	s_len;
	char	*str;

	s_len = ft_strlen(s + start);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	if (s_len < len)
		len = s_len;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	count = 0;
	if (start < len)
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
