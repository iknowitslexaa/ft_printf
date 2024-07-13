/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:10:13 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/30 12:34:33 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i]
		&& i < (n - 1) && (unsigned char)s1[i] != '\0'
		&& (unsigned char)s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main()
{
	char	s1[] = "ABCDEF";
	char	s2[] = "ABCDEF";

	printf("The difference is: %i", ft_strncmp(s1, s2, 7));
}*/
