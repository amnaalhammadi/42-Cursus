/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:07:02 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/07/27 12:32:59 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int	ft_isalpha(int c)
{
	return (65 <= c && c <= 90 | c >= 97 && c <= 122);
}

// int	main(void)
// {
// 	char	a;

// 	a = 'a';
// 	printf("%i\n", ft_isalpha(a));
// 	printf("%i", isalpha(a));
// }
