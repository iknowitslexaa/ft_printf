/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 18:20:12 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/05 18:30:05 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main()
{
	//c is the character to output
	char	c;
	int	fd;
	
	c = '9';
	fd = 1;
	ft_putchar_fd(c, 1);
	return (0);
}*/
