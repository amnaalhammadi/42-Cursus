/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:30:31 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/07/26 12:40:39 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int	main(void)
{
	char a [] = 'asdf';
	printf("%d", ft_tolower(a));
	printf("%d", tolower(a));
}*/