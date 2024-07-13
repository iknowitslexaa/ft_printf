/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkformat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:23:18 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/07/13 14:56:25 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	check_format(va_list args, char c)
{
	int	return_value;

	return_value = 0;
	if (c == 'c')
		return_value += ft_printchar(va_arg(args, int));
	if (c == 's')
		return_value += ft_printstr(va_arg(args, char *));
	if (c == 'p')
		return_value += ft_printptr(va_arg(args, unsigned long));
	if (c == 'd' || c == 'i')
		return_value += ft_printnbr(va_arg(args, int));
	if (c == 'u')
		return_value += ft_printusg(va_arg(args, unsigned int));
	if (c == 'X' || c == 'x')
		return_value += ft_printhexa(va_arg(args, unsigned int), c);
	if (c == '%')
		return_value += ft_printchar('%');
	return (return_value);
}
