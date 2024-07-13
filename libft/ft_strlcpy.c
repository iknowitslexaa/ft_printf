/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:38:47 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/04/27 18:18:49 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return ((size_t)ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((size_t)ft_strlen(src));
}

/*int	main()
{
	char	str1[20] = "Example !";
	char	str2[20] = "WOW ";

	printf("Antes do strcpy: %s\n", str2);
	ft_strlcpy(str2, str1, 10);
	printf("Depois do strcpy: %s", str2);
}*/
