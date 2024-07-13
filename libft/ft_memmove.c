/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:51:44 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/04/27 16:37:47 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n--)
		((char *)dest)[n] = ((char *)src)[n];
	return (dest_ptr);
}

/*int	main()
{
	char	src[] = "newstring";
	char	dest[] = "oldstringss";
	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s", dest, src);
	return (0);
}*/
