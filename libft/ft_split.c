/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:44:39 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/08 10:32:02 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	if (s[i] == c)
		word--;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			word++;
		i++;
	}
	word++;
	return (word);
}

static char	*ft_dup(char const *s, char c)
{
	int		i;
	int		len;
	char	*m;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	m = (char *)malloc(sizeof(char) * (len + 1));
	if (!m)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		m[i] = s[i];
		i++;
	}
	m[i] = 0;
	return (m);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**m;

	i = 0;
	if (!s)
		return (NULL);
	word = ft_count_word(s, c);
	m = (char **)malloc(sizeof(char *) * (word + 1));
	if (!m)
		return (NULL);
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			m[i] = ft_dup(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	m[i] = 0;
	return (m);
}
