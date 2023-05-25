/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:22:51 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/07/28 12:18:09 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*x;
	char	*a;
	int		i;

	x = (char *)s1;
	i = 0;
	a = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!a)
		return (NULL);
	while (s1[i] != '\0')
	{
		a[i] = x[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

// int main(void)
// {
// 	char s[] = "amna";	
// 	printf("%s\n", ft_strdup(s));
// 	printf("%s\n", strdup(s));	
// }