/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:17:13 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/23 14:18:24 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr(int n)
{
	int long	i;
	char		num;

	i = (int long)n;
	if (i < 0)
	{
		write(1, "-", 1);
		i *= -1;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
	{
		num = i + '0';
		write(1, &num, 1);
	}
}

int long	ft_count(int long n)
{
	int long	count;

	count = 0;
	ft_putnbr(n);
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

// int main(void)
// {
// 	printf("\n%ld", ft_count(8));
// 	// it will return 8, len 1
// }