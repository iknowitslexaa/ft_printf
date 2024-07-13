/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:15:48 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/04/21 18:37:59 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
	{
		*(unsigned char *)s++ = '\0';
	}
}

/*void	main()
{
	char	str[11] = "Hello World";

	printf("%*s", (int)sizeof(str), str);
	ft_bzero(str, sizeof(str));
	printf("\n%*s", (int)sizeof(str), str);
}*/
