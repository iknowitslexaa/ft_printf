/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:44:31 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/07/13 15:12:59 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printnbr(int i)
{
	int		return_value;
	char	*nbr;

	return_value = 0;
	nbr = ft_itoa(i);
	return_value = ft_printstr(nbr);
	free(nbr);
	return (return_value);
}

// int	main()
// {
// 	int	c;
// 	int	d;
// 	c = 23475;
// 	d = ft_printnbr(c);
// 	printf("\n%i", d);
// }
