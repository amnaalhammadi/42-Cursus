/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:55:57 by aal-hamm          #+#    #+#             */
/*   Updated: 2023/01/02 11:27:14 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *str, char *buff)
{
	char	*s1;
	int		i;
	int		j;

	if (!str)
	{
		str = (char *)malloc (1 * sizeof(char));
		str[0] = '\0';
	}
	if (!str || !buff)
		return (NULL);
	s1 = malloc(sizeof(char) * ((ft_strlen(str) + ft_strlen(buff)) + 1));
	if (!s1)
		return (NULL);
	i = -1;
	j = 0;
	if (str)
		while (str[++i] != '\0')
			s1[i] = str[i];
	while (buff[j] != '\0')
		s1[i++] = buff[j++];
	s1[ft_strlen(str) + ft_strlen(buff)] = '\0';
	free (str);
	return (s1);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
