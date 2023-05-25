/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:01:03 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/07/28 11:21:16 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i--;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	const char a[] = "tripouille";
// 	// const char b = 'm';
// 	printf("%s\n", ft_strrchr(a, 't' + 256));
// 	printf("%s", strrchr(a, 't' + 256));
// }
