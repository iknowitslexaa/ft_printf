/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:38:47 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/08 16:06:34 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*ptr;

	ptr = dest;
	if (!dest && !src)
	{
		return (0);
	}
	while (n--)
	{
		*(char *)dest++ = *(char *)src++;
	}
	return (ptr);
}

/*void	main()
{
	char	src[50] = "me and you when your mom and I and";
	char	dest[50];
	strcpy(dest, "Hellooo!!");
	printf("before memcpy: %s", dest);
	ft_memcpy(dest, src, 5);
	printf("\nAfter memcpy: %s", dest);
}*/
