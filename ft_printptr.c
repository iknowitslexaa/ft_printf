/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:08:36 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/07/06 16:04:24 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ptr_len(unsigned long int n)
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

void	ptr_help(unsigned long int i)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
		ptr_help(i /16);
	ft_printchar(base[i % 16]);
}

int	ft_printptr(unsigned long int n)
{
	int	return_value;
	//char	c;

	//c = 'p';
	return_value = 0;
	if (!n)
		return (write(1, "0", 1));
	return_value = write(1, "0x", 2);
	ptr_help(n);
	return_value += ptr_len(n);
	//return_value += ft_helphexa(n, c, return_value);
	return (return_value);
}
