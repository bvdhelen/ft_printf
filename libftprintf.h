/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:56:49 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/10/25 19:50:14 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_unsigned_fd(unsigned int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_print_hexadecimal_lower(unsigned int n, int fd);
void	ft_print_hexadecimal_upper(unsigned int n, int fd);
void	ft_print_pointer(void *p, int fd);
int		ft_format(va_list args, int i, int count);
int		ft_printf(char const *data, ...);

#endif