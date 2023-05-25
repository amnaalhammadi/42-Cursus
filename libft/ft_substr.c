/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:18:27 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/04 10:38:23 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*a;

	i = 0;
	if (!s)
		return (0);
	if (ft_strlen(&s[start]) < len)
		len = ft_strlen(&s[start]);
	a = (char *)malloc(sizeof(char) * len + 1);
	if (!a)
		return (NULL);
	while (start < ft_strlen(s) && s[start + i] && i < len)
	{
		a[i] = s[start + i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

// int	main(void)
// {
// 	char src[] = "amna moon he";
// 	int m =  20;
// 	int n = 2;
// 	char* dest = ft_substr(src, m, n);
// 	printf("%s\n", dest);
// 	return 0;
// }
