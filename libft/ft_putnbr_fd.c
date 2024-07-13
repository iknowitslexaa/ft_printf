/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 18:57:09 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/07 18:28:09 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(int fd, char a)
{
	write(fd, &a, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	c;

	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	c = (unsigned int)n;
	if (c >= 10)
	{
		ft_putnbr_fd(c / 10, fd);
	}
	ft_putnbr(fd, (char)(c % 10 + 48));
}

/*int	main()
{
	int	i;

	i = 10000043;
	ft_putnbr_fd(i, 1);
	return (0);
}*/
