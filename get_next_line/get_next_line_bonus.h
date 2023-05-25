/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:55:57 by aal-hamm          #+#    #+#             */
/*   Updated: 2023/01/04 13:58:27 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <ctype.h>
# include <stdio.h>
# include <limits.h> 
# include <stdint.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h> 
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000
# endif

size_t	ft_strlen(char *s);
char	*ft_strjoin(char *str, char *buff);
char	*ft_strchr(char *s, int c);
char	*get_next_line(int fd);
char	*ft_read_line(char *str);
char	*ft_save_line(char *line);
char	*ft_read_and_save(int fd, char *line);

#endif