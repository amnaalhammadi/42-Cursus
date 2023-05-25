/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:07:02 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/08 11:33:06 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57 | c >= 65 && c <= 90 | c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	a;

	a = 1;
	printf("%i\n", ft_isalnum(a));
	printf("%i", isalnum(a));
}*/
