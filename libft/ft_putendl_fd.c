/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 18:39:08 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/05/05 18:48:08 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;
	char	n;

	i = 0;
	n = '\n';
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &n, 1);
}

/*int	main()
{
	char	str[] = "This string plus a new line";
	char    str1[] = "This string plus a new line";

	ft_putendl_fd(str, 1);
	ft_putendl_fd(str1, 1);
	return (0);
}*/
