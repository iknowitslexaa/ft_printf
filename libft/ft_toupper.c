/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:49:34 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/04/28 16:25:02 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

/*int	main()
{
	char	str = 'd';
	char    str1 = 'F';
	char    str2 = '9';

	printf("Before: %c\n", str);
	printf("Before: %c\n", str1);
	printf("Before: %c\n", str2);
	printf("After: %c\n", ft_toupper(str));
	printf("After: %c\n", ft_toupper(str1));
	printf("After: %c", ft_toupper(str2));
}*/
