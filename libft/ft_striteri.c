/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:57:49 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/30 12:35:32 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*void	my_func(unsigned int i, char* str)
{
	char	*result;
	printf("Internal index = %d, char = %s \n", i, str);
	result = str - 32;
	printf("%s\n", result);
}	

int	main()
{
	char	str[] = "jello";
	ft_striteri(str, my_func);
	return 0;
}*/
