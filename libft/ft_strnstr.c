/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:05:10 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/04 15:44:13 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	n;

	n = ft_strlen(little);
	if (n == 0 || big == little)
		return ((char *)big);
	n = ft_strlen(big);
	if (n == 0)
		return (NULL);
	while (*big && len--)
	{
		n = 0;
		while (*(big + n) == *(little + n) && *little && n <= len)
		{
			if (!*(little + n + 1))
				return ((char *)big);
			n++;
		}
		big++;
	}
	return (NULL);
}

/* #include <string.h>

int	main()
{
	const char *largestring = "Foo Bar Baz";
    const char *smallstring = "";

	printf("%s", ft_strnstr(largestring, smallstring, 4));
} */
