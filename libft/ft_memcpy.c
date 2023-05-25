/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:17:23 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/07/28 12:02:08 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (d == s)
		return (d);
	while (n--)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
// int	main(void)
// {
// 	char	dest[] = "amna";
// 	char	src[]  = "hey";
// 	memcpy(dest, src, 7);
// 	printf("%s\n",dest );
// 	// printf("%d", memcpy(dest, src, 5));
// }
