/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal_lower.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:42:31 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/10/25 19:53:08 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_hexadecimal_lower(unsigned int n, int fd)
{
	char	hex_char;

	if (n >= 16)
		print_hexadecimal_lower (n / 16, fd);
	hex_char = "0123456789abcdef"[n % 16];
	write(fd, &hex_char, 1);
}
