/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:10:45 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/07/27 14:26:39 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	if (dstsize == 0)
		return (count);
	dst[i] = '\0';
	return (count);
}
/*
int	 main(void)
{
	char a[] = "hedxgeyy";
	char b[20]= ' ';
	char c[20]= ' ';
	printf("%lu\n", ft_strlcpy(b, a, 20));
	printf("%s\n", b);
	printf("%lu\n", strlcpy(c, a, 20));
	printf("%s\n", c);
	return (0);
}*/
