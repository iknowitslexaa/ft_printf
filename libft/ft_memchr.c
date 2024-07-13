/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:53:11 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/04 15:03:05 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

/*int	main()
{
	char	s1[] = "WOW so this is what its like to be know";
	char	c = 't';
	void	*ptr;


	ptr = ft_memchr(s1, c, 4);
	printf("%s", (char*)ptr);
}*/
