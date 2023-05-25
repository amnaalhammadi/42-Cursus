/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:41:35 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/07/27 11:10:30 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	i = 0;
	j = ft_strlen(dst);
	while (src[i] != '\0' && j + 1 < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

// int	main(void)
// {
//     char a[] = "hey";
//     char b[] = "qwertyu";
// 	char c[] = "qwertyu";

//     printf("%zu\n", ft_strlcat(c, a, 8));
// 	printf("%s\n", b);
// 	printf("%lu\n", strlcat(b, a, 8));
// 	printf("%s\n", b);
//     return (0);
// }
