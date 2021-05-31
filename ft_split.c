/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:00:00 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/05/28 13:25:50 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwrd(char const *s, char c)
{
	unsigned int	count;
	int				cntw;

	count = 0;
	cntw = 0;
	while (s[count])
	{
		while (s[count] == c)
			count++;
		if (s[count] != '\0')
			cntw++;
		while (s[count] && s[count] != c)
			count++;
	}
	return (cntw);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_memcpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**len;
	int		count;
	int		i;
	int		i2;

	count = 0;
	i = 0;
	len = (char **)malloc(sizeof(char *) * (ft_countwrd(s, c)) + 1);
	if (len == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		i2 = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > i2)
			len[count++] = ft_strndup(s + i2, i - i2);
	}
	len[count] = NULL;
	return (len);
}
