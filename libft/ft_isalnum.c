/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:52:54 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/04/20 18:11:38 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

/*void	main()
{
	int result;
	char c;
	c = '6';
	result = ft_isalnum(c);
	printf("When %c is passed, return the value is %d\n", c, result);

	c = 'k';
	result = ft_isalnum(c);
	printf("When %c is passed, return the value is %d\n", c, result);

	c = 'W';
	result = ft_isalnum(c);
	printf("When %c is passed, return the value is %d\n", c, result);

	c = '@';
	result = ft_isalnum(c);
 	printf("When %c is passed, return the value is %d\n", c, result);
}*/
