/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:39:31 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/07/27 11:51:11 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	if (d > s)
	{
		while (len--)
		{
			*(d + len) = *(s + len);
		}
		return (d);
	}
	if (s > d)
	{
		while (len > i)
		{
		d[i] = s[i];
		i++;
		}
	}
	return (d);
}
/*
int	main(void)
{
	char	dest[] = "amna";
	const char	src[]  = "hey";

	printf("%s\n", ft_memmove(dest, src, 5));
	printf("%s", memmove(dest, src, 5));
}*/
