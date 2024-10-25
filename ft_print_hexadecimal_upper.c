/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal_upper.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:44:00 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/10/25 19:53:28 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_hexadecimal_upper(unsigned int n, int fd)
{
	char	hex_char;

	if (n >= 16)
		print_hexadecimal_upper (n / 16, fd);
	hex_char = "0123456789ABCDEF"[n % 16];
	write(fd, &hex_char, 1);
}
