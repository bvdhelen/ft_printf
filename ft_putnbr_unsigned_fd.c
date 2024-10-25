/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:40:30 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/10/25 19:45:56 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	if (n >= 10)
	{
		ft_putnbr_unsigned_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
}
