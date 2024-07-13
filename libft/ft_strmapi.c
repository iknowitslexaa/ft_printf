/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 14:30:58 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/30 14:23:05 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	my_func(unsigned int i, char str)
{
	printf("Internal index = %d, char = %d \n", i, str);
	return (str - 32);
}

int	main()
{
	char	str[] = "Hithere!";
	printf("Before: %s\n", str);

	char	*result = ft_strmapi(str, my_func);
	printf("the result is: %s", result);
	
	return 0;
}*/
