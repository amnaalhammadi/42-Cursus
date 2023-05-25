/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:25:19 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/07/26 14:13:20 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*a;

	a = (char *)s;
	i = 0;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}

// int main()
// {
//     char bytes[5] = {1, 'j', 3,4,'x'};
//     bzero(bytes, 3);
//     int i = 0;
//     while (i < 5)
//     {
//         printf("%d, ", bytes[i]);
//         i++;
//     }
//     return (0);
// }