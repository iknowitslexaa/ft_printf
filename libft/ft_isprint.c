/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:12:15 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/30 14:19:37 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*void	main()
{
	int result;
	char c;
	
	c = 'Q';
	result = ft_isprint(c);
	printf("Result when a character %c is passed to isprint(): %d", c, result);

	c = '\n';
	result = ft_isprint(c);
	printf("\nResult when a character %c is passed to isprint(): %d", c, result);
}*/
