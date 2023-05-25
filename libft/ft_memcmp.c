/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:17:23 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/02 12:07:59 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0 | str1 == str2)
		return (0);
	while (n--)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
	// if (str1 == str2)
	// 	return (0);
/*
int	main(void)
{
	char	str1[] = " ";
	char	str2[]  = "hei";
	//const char	str3[]  = "hey";

	printf("%d\n", ft_memcmp(str1, str2, 5));
	printf("%d", memcmp(str1, str2, 5));
}*/
