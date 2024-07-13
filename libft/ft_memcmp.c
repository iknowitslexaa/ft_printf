/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:15:34 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/08 14:11:33 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	i = 0;
	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (ptr1[i] != ptr2[i])
			return ((int)(ptr1[i] - ptr2[i]));
		ptr1++;
		ptr2++;
	}
	return (0);
}

/*int	main()
{
	int	i;
	char	str1[] = "A";
	char	str2[] = "B";

	i = ft_memcmp(str1, str2, 20);
	printf("%i", i);
}*/
