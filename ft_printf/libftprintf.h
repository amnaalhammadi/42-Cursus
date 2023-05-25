/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hamm <aal-hamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:43:49 by aal-hamm          #+#    #+#             */
/*   Updated: 2022/08/24 12:00:12 by aal-hamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdio.h>

void		ft_putnbr(int n);
void		ft_un_putnbr(unsigned int n);
void		ft_hex2dec(unsigned int n, char c);
int long	ft_count(int long n);
int			ft_un_count(unsigned int n);
int			ft_hex(unsigned int n, char c);
int			ft_putstr(char *s);
int			ft_ptr(void *s);
int			ft_putchar(int c);
int			ft_printf(const char *s, ...);
int			ft_print_str(char *s);
int			ft_percent(void);
int			ft_format(va_list args, const char s);
#endif