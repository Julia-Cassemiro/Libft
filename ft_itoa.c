/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:22:48 by jgomes-c          #+#    #+#             */
/*   Updated: 2021/05/31 11:06:30 by jgomes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *string;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(string = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (n < 0)
	{
		string[0] = '-';
		string[1] = '\0';
		string = ft_strjoin(string, ft_itoa(-n));
	}
	else if (n >= 10)
		string = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		string[0] = n + '0';
		string[1] = '\0';
	}
	return (string);
}