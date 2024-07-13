/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:02:44 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/05 14:55:38 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	set_zero(void *ptr, size_t t_size)
{
	while (t_size--)
	{
		*(unsigned char *)ptr = 0;
		ptr++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	set_zero(ptr, nmemb * size);
	return (ptr);
}

/*int	main()
{
	int	i, n;
	int	*a;

	printf("Number of elements to be entered:");
	scanf("%d", &n);

	a = (int*)ft_calloc(n, sizeof(int));
	printf("Enter %d nubers:\n", n);

	i = 0;
	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}

	printf("The numbers entered are: ");
	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		i++;
	}
	free (a);

	return (0);
}*/
