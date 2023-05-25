/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:36:36 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/08 11:13:07 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	long long	i;
	long long	sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' | str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
		if (result > INT_MAX && sign == 1)
			return (-1);
		if (result < INT_MIN && sign == -1)
			return (0);
	}
	return (result * sign);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi(" -421234512345678678901234567"));
// 	printf("%d\n", atoi(" -421234512345678678901234567"));
// 	return (0);
// }
