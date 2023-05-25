/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:17:11 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/08 11:25:07 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <xlocale.h>

const char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == 0)
		return (haystack);
	if (len < 0)
		len = ft_strlen(haystack);
	while (haystack[j] != '\0')
	{
		i = 0;
		while (haystack[i + j] == needle[i] && (i + j) < len)
		{
			i++;
			if (needle[i] == '\0')
				return (&haystack[j]);
		}
		j++;
	}
	return (0);
}
/*
int	main(void)
{
	const char a[] = "amna hey";
	const char b[] = "hey";
	const char c[] = "amna hey";
	const char d[] = "hey";
	
	printf("%s\n", ft_strnstr(b, a, 5));
	printf("%s", strnstr(d, c, 5));
}*/
