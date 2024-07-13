/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:15:52 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/30 14:18:23 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*ptr;

	ptr = s;
	while (n--)
	{
		*(unsigned char *)s++ = (unsigned char)c;
	}
	return (ptr);
}

/*void	main()
{
	char	str[5];
	ft_memset(str, 'B', sizeof(str));
	printf("%*s", 5, str);
}*/
