/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:49:46 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/10/25 19:54:33 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_format(va_list args, int i, int count)
{
	if (i == 'c')
		ft_putchar_fd(va_arg(args, char *), 1);
	else if (i == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	//else if (i == 'p')
	else if (i == 'd' || i == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (i == 'u')
		ft_putnbr_unsigned_fd(va_arg(args, unsigned int), 1);
	else if (i == 'x')
		print_hexadecimal_lower(va_arg(args, unsigned int), 1);
	else if (i == 'X')
		print_hexadecimal_upper(va_arg(args, unsigned int), 1);
	else if (i == '%')
		ft_putchar_fd('%', 1);
	else
		count = count + write(1, &i, 1);
}
