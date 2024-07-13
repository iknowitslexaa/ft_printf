/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:39:56 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/06/28 15:43:37 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printstr(char *s)
{
	int	return_value;
	int	i;

	i = 0;
	return_value = 0;
	while (s[i] != '\0')
	{
		return_value += ft_printchar(s[i]);
		i++;
	}
	return (return_value);
}
