/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:56:02 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/11 15:04:47 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

static char	*copy(char *new, const char *old)
{
	size_t	i;

	i = 0;
	while (old[i] != '\0')
	{
		new[i] = old[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*ptr;

	size = ft_strlen(s);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	return (copy(ptr, s));
}

/*int	main()
{
	char	*ptr = "This is a normal test";
	int	array;

	array = sizeof(ptr);
	printf("%s /space: |%i|\n", ft_strdup(ptr), array);

	return (0);
}*/
