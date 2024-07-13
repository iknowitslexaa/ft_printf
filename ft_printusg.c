/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printusg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 16:18:44 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/06/28 16:31:09 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

static char	*makestr(long int num, char *nbr, size_t size)
{
	char	c;
	size_t	i;

	i = size - 1;
	while (num != 0)
	{
		c = (char)(num % 10 + '0');
		nbr[i--] = c;
		num /= 10;
	}
	return (nbr);
}

static size_t	get_size(int n)
{
	long int	num;
	size_t		size;

	size = 0;
	num = n;
	if (num <= 0)
	{
		size++;
		num = -num;
	}
	while (num != 0)
	{
		size++;
		num /= 10;
	}
	return (size);
}

int	ft_printusg(unsigned int n)
{
	char		*nbr;
	size_t		size;
	int		return_value;

	size = get_size(n);
	nbr = (char *)malloc(sizeof(char) * (size + 1));
	if (!nbr)
		return (0);
	nbr[size] = '\0';
	if (n == 0)
		nbr[0] = '0';
	else
		nbr = makestr(n, nbr, size);
	return_value = ft_printstr(nbr);
	free(nbr);
	return (return_value);
}


/*int	main()
{
	int	i;
	int	f;
	i = 1234;
	f = ft_printusg(i);
	printf("%i", f);
}*/
