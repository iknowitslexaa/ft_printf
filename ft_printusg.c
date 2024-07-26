/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printusg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:18:44 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/07/13 15:17:07 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static size_t	get_size(unsigned int n);

static char	*makestr(long int n)
{
	size_t	i;
	char	*num;
	size_t	size;

	size = get_size(n);
	num = (char *)malloc(sizeof(char) * (size + 1));
	if (!num)
		return (0);
	num[size] = '\0';
	i = size - 1;
	while (n != 0)
	{
		num[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (num);
}

static size_t	get_size(unsigned int n)
{
	size_t	size;

	size = 0;
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

int	ft_printusg(unsigned int n)
{
	char		*nbr;
	int			return_value;

	if (n == 0)
	{
		return_value = write(1, "0", 1);
	}
	else
	{
		nbr = makestr(n);
		return_value = ft_printstr(nbr);
		free(nbr);
	}
	return (return_value);
}
