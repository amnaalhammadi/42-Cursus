/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:17:13 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/24 12:01:41 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_hex2dec_ptr(unsigned long n, char c)
{
	char	*x;

	if (c == 'x')
		x = "0123456789abcdef";
	else
		x = "0123456789ABCDEF";
	if (n >= 16)
		ft_hex2dec_ptr((n / 16), c);
	write(1, &x[n % 16], 1);
}

static int	ft_hex_ptr(unsigned long n, char c)
{
	int	i;

	i = 0;
	ft_hex2dec_ptr(n, c);
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n /= 16;
	}
	return (i);
}

int	ft_ptr(void *s)
{
	unsigned long long	j;
	int					i;

	i = 2;
	j = (unsigned long long) s;
	write(1, "0x", 2);
	return (i + ft_hex_ptr(j, 'x'));
}
