/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:32:47 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/07/26 12:40:27 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	char a []= 'asdf';
	printf("%d", ft_tolower(a));
}*/ 