/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:12:10 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/23 14:12:13 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_un_putnbr(unsigned int n)
{
	unsigned long	i;
	char			num;

	i = (unsigned long)n;
	if (i < 0)
	{
		write(1, "-", 1);
		i *= -1;
	}
	if (i > 9)
	{
		ft_un_putnbr(i / 10);
		ft_un_putnbr(i % 10);
	}
	else
	{
		num = i + '0';
		write(1, &num, 1);
	}
}

int	ft_un_count(unsigned int n)
{
	unsigned long	count;

	count = 0;
	ft_un_putnbr(n);
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
// 	printf("\n%d", ft_un_count(8));
// 	// it will return 8, len 1
// }