/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:13:09 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/04 11:12:52 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int long	ft_count(int long n)
{
	int long	count;

	count = 0;
	if (n < 0 | n == 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	i;
	long	len;
	long	newn;
	char	*str;

	len = ft_count(n);
	i = len;
	newn = n;
	if (newn < 0)
		newn *= -1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	i--;
	while (i >= 0)
	{
		str[i] = newn % 10 + '0';
		newn = newn / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
