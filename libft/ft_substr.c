/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:49:17 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/30 14:17:58 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	int		i;
	size_t	j;

	j = ft_strlen(s);
	if (len > j)
		len = j;
	if (j <= start || j == 0)
		len = 0;
	if (len > j - start)
		len = j - start;
	if (s == NULL)
		return (NULL);
	newstr = ((char *)malloc(sizeof(char) * (len + 1)));
	if (!s || !newstr)
	{
		newstr = (char *)malloc(1);
		return (0);
	}
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		newstr[j++] = s[i++];
	newstr[j] = '\0';
	return (newstr);
}

/*int	main()
{
	//s is the strig from which the substring will be created
	char	s[] = "Heelooo fuhebyf";
	//start is the index of s that the substring begins
	unsigned int start;
	//len is the maximum size the substring can be;
	size_t	len;

	start = 4;
	len = 4;

	printf("%s", ft_substr(s, start, len));
	return (0);
}*/
