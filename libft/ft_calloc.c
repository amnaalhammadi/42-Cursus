/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:13:45 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/07/28 12:16:01 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	a = malloc(size * count);
	if (!a)
		return (NULL);
	ft_bzero(a, (count * size));
	return (a);
}
