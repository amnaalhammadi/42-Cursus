/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:10:25 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/23 14:39:52 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_format(va_list args, const char s)
{
	int	result;

	result = 0;
	if (s == 'c')
		result += ft_putchar(va_arg(args, int));
	else if (s == 's')
		result += ft_putstr(va_arg(args, char *));
	else if (s == 'p')
		result += ft_ptr(va_arg(args, void *));
	else if (s == 'd' || s == 'i')
		result += ft_count(va_arg(args, int));
	else if (s == 'u')
		result += ft_un_count(va_arg(args, unsigned int));
	else if (s == 'x' || s == 'X')
		result += ft_hex((unsigned int)va_arg(args, int), s);
	else if (s == '%')
		result += ft_percent();
	return (result);
}

int	ft_printf(const char *s, ...)
{
	int		len;
	int		i;
	va_list	arg;

	i = 0;
	len = 0;
	va_start(arg, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += ft_format(arg, s[i + 1]);
			i++;
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
