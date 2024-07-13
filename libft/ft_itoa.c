/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:39:25 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/30 14:10:27 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

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

char	*ft_itoa(int n)
{
	char		*nbr;
	long int	num;
	size_t		size;

	num = n;
	size = get_size(n);
	nbr = (char *)malloc(sizeof(char) * (size + 1));
	if (!nbr)
		return (NULL);
	nbr[size] = '\0';
	if (n < 0)
		num = -num;
	if (n == 0)
		nbr[0] = '0';
	else
		nbr = makestr(num, nbr, size);
	if (n < 0)
		nbr[0] = '-';
	return (nbr);
}

/*int	main()
{
	printf("%s", ft_itoa(-2147483647 -1));
}*/
