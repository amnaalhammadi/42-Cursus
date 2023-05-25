/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:10:07 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/02 09:30:49 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (n--)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return (NULL);
	return (0);
}
/*
int	main(void)
{
	const char a[] = "amna is moon";
	const char b = 'n';

	printf("%s\n", ft_memchr(a, b, 10));
	printf("%s", memchr(a, b, 10));
}*/
