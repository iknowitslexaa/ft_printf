/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:02:53 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/07/08 15:37:49 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexa_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}

void	ft_helphexa(unsigned int i, char c)
{
	char	*base;

	if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (i >= 16)
		ft_helphexa(i / 16, c);
	ft_printchar(base[i % 16]);
}

int	ft_printhexa(unsigned int i, char c)
{
	int	return_value;

	if (i == 0)
	{
		ft_printchar('0');
		return (1);
	}
	ft_helphexa(i, c);
	return_value = hexa_len(i);
	return (return_value);
}

//esta a retornar o valor errado (return value)
//E melhor fazer tipo o ptr em que tem 3 funcoes, verificar isso
