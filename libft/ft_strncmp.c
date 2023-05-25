/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:12:57 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/07/28 12:21:01 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
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
		if (str1[i] != str2[i] | str1[i] == '\0' | str2[i] == '\0')
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "amna";
	const char	str2[]  = "hey";

	printf("%d\n", ft_strncmp(str1, str2, 5));
	printf("%d", strncmp(str1, str2, 5));
}*/