/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:08:45 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/06/22 18:25:23 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	int	i;
	/*va_list is a type of variable provided by stdarg.g that contains the
	information necessary to work with a variable list of arguments*/
	va_list	args;
	//the printf function returns the lenght of the string;
	int	return_value;
	/*this following function allows me to acess those variables. The
	first variable is the list (args) and the second one is the
	last variable before the ... (in this case, s).*/
	va_start(args, s);
	
	while (s[i])
	{
		if (s[i] == '%')
		{
			return_value += check_format(args, s[i]);
			i++;
		}
		else
			return_value += ft_printfchar(str[i]);
		i++;
	}
	//va_end to end the acess to the list of arguments
	va_end(args);
	return (return_value);	
}
