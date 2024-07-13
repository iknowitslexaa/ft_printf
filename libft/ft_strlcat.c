/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:19:18 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/04/27 18:52:11 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_s;
	size_t	len_d;
	size_t	extra;

	if (size == 0)
		return (ft_strlen(src));
	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	extra = len_d;
	i = 0;
	if (size < len_d)
		return (size + len_s);
	while (src[i] && extra < size - 1)
		dst[extra++] = src[i++];
	dst[extra] = '\0';
	return (len_d + len_s);
}

/*int	main()
{
	char	str1[20] = "Example!!";
	char	str2[50] = "I Wish There Was An ";

	printf("Before: %s\n", str2);
	ft_strlcat(str2, str1, sizeof(str2));
	printf("After: %s", str2);
}*/
