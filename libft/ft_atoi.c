/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:44:47 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/11 14:24:10 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "libft.h"

static int	ck_space(int c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	return (0);
}

static int	ck_digit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int				value;
	long long int	nbr;

	value = 1;
	nbr = 0;
	while (*nptr && ck_space(*nptr))
		nptr++;
	if (*nptr == 43 || *nptr == 45)
	{
		if (*nptr == 45)
		{
			value = -1;
		}
		nptr++;
	}
	while (*nptr && ck_digit(*nptr))
	{
		nbr = nbr * 10 + (*nptr - 48);
		nptr++;
	}
	return (nbr * value);
}

/*int	main()
{
	int val;

	val = ft_atoi("\t\v\f\r\n \f-06050");
	printf("String valur \\t\\v\\f\\r\\n \\f-06050, Int value = %d\n", val);

	val = ft_atoi(((void*)0));
	printf("String valur ((void*)0), Int value = %d\n", val);
	
	val = atoi(((void*)0));
	printf("String valur ((void*)0), Int value = %d\n", val);

	val = ft_atoi("2147483647");
	printf("String valur 2147483647, Int value = %d\n", val);

	val = ft_atoi("  + 9999999");
	printf("String valur +9999999, Int value = %d", val);

}*/
