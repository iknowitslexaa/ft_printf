/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:17:11 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/30 14:13:04 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	c;
	size_t	size;
	char	*newstr;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	newstr = (char *)malloc(sizeof(char) * size);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	c = 0;
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	while ((i + c) < size)
	{
		newstr[i + c] = s2[c];
		c++;
	}
	newstr[i + c] = '\0';
	return (newstr);
}
