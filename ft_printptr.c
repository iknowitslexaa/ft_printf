/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:08:36 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/07/26 14:54:50 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_len(unsigned long long n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}

void	ptr_help(unsigned long long i)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
		ptr_help(i / 16);
	ft_printchar(base[i % 16]);
}

int	ft_printptr(unsigned long long n)
{
	int	return_value;

	return_value = 0;
	if (!n)
		return (ft_printstr("(nil)"));
	return_value = write(1, "0x", 2);
	if (n == 0)
		return_value = (write(1, "0", 1));
	else
	{
		ptr_help(n);
		return_value += ptr_len(n);
	}
	return (return_value);
}
