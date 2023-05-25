/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:00:58 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/08 11:03:08 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
