/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:44:35 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/24 12:00:06 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_hex2dec(unsigned int n, char c)
{
	char	*x;

	if (c == 'x')
		x = "0123456789abcdef";
	else
		x = "0123456789ABCDEF";
	if (n >= 16)
		ft_hex2dec((n / 16), c);
	write(1, &x[n % 16], 1);
}

int	ft_hex(unsigned int n, char c)
{
	int	i;

	i = 0;
	ft_hex2dec(n, c);
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n /= 16;
	}
	return (i);
}

// int main(void)
// {
//     int n = 123;
//     ft_hex(n, 'x');
//     printf("%x\n", n);
//     ft_hex(n, 'X');
//     printf("%X", n);
// }
