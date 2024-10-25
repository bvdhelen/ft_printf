/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:44:32 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/10/25 19:52:07 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *data, ...)
{
	va_list	args;	
	int		i;
	int		count;

	va_start(args, data);
	i = 0;
	count = 0;
	while (data[i] != '\0')
	{
		if (data[i] == '%')
		{
			i++;
			ft_format(args, i, count);
		}
		else
			count = count + write(1, &data[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
