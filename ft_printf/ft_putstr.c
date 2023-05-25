/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 09:26:36 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/23 14:12:17 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

// int main(void)
// {
// 	printf("\n%d", ft_putstr("amna"));
// 	// it will return amna, len 4
// }