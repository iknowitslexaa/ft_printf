/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:24:03 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/04/20 17:00:24 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

/*void	main()
{
	int d;
	char c;
	d = 5;
	c = '5';
	printf("result when numeric character is passed: %d", ft_isdigit(c));
	printf("\nresult when numeric character is passed: %d", ft_isdigit(d));
	printf("\nresult when numeric character is passed: %d", ft_isdigit(d));
	
	c = 'a';
	printf("\nResult when non-numeric is passed: %d", ft_isdigit(c));

	c = '+';
	printf("\nResult when non-numeric is passed: %d", ft_isdigit(c));
}*/
