/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:55:54 by aal-hamm          #+#    #+#             */
/*   Updated: 2023/01/04 13:33:19 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_line(char *str)
{
	int		i;
	char	*s1;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	s1 = (char *)malloc(sizeof(char) * (i + 2));
	if (!s1)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		s1[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		s1[i] = str[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_save_line(char *line)
{
	int		i;
	int		x;
	char	*str;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (!line[i])
	{
		free(line);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(line) - i + 1));
	if (!str)
		return (NULL);
	i++;
	x = 0;
	while (line[i])
		str[x++] = line[i++];
	str[x] = '\0';
	free (line);
	return (str);
}

char	*ft_read_and_save(int fd, char *line)
{
	char	*buff;
	int		bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	bytes = 1;
	while (bytes != 0)
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes == -1)
		{
			free (buff);
			return (NULL);
		}
		buff[bytes] = '\0';
		line = ft_strjoin(line, buff);
		if (ft_strchr(line, '\n'))
			break ;
	}
	free (buff);
	return (line);
}

char	*get_next_line(int fd)
{
	char		*print_line;
	static char	*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str = ft_read_and_save(fd, str);
	if (!str)
		return (NULL);
	print_line = ft_read_line(str);
	str = ft_save_line(str);
	return (print_line);
}

// int	main(void)
// {
// 	char	*line;
// 	int		i;
// 	int		fd1;

// 	fd1 = open("get_next_line.txt", O_RDONLY);
// 	i = 1;
// 	while (i < 10)
// 	{
// 		line = get_next_line(fd1);
// 		printf("line [%02d]: %s", i, line);
// 		free(line);
// 		i++;
// 	}
// 	close(fd1);
// 	return (0);
// }