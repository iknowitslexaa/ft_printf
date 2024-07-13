/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:25:58 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/04/28 16:34:20 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*int	main()
{
	char	str = 'A';
	char    str1 = 'b';
	char    str2 = '/';

	printf("Before: %c\n", str);
	printf("Before: %c\n", str1);
	printf("Before: %c\n", str2);
	printf("After: %c\n", ft_tolower(str));
	printf("After: %c\n", ft_tolower(str1));
	printf("After: %c", ft_tolower(str2));
}*/
