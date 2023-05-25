/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:25:19 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/02 13:38:28 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*a;

	a = (char *)b;
	i = 0;
	while (len--)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
/*
int	main(void)
{
	char str[] = "amna hey";
	char a = '!';
	printf("%s\n", ft_memset(str, a, 5));
	printf("%s", memset(str, a, 5));
}*/
