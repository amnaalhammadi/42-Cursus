/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:17:13 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/08 10:51:03 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int long	i;
	char		num;

	i = (int long)n;
	if (fd < 1)
		return ;
	if (i < 0)
	{
		write(fd, "-", 1);
		i *= -1;
	}
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
	else
	{
		num = i + '0';
		write(fd, &num, 1);
	}
}
