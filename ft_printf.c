/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:08:45 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/07/08 15:41:33 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>

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
	
	return_value = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			return_value += check_format(args, s[i]);
		}
		else
			return_value += ft_printchar(s[i]);
		i++;
	}
	//va_end to end the acess to the list of arguments
	va_end(args);
	return (return_value);	
}


/*int	main(void)
{
	int		res = 0;
	int		res1 = 0;
	int		res2 = 0;
	char	c = 'x';
	char	str[] = "UwU OwO";
	int		n = 42;
	int		i = -123;
	int		*ptr = &i;
	
	res += ft_printf("AwA\n");
	res += ft_printf("Char: %c\n", c);
	res += ft_printf("String: %s\n", str);
   	res2 += ft_printf("Pointer: %p\n", ptr);
   	res1 += printf("Pointer: %p\n", ptr);
	res2 += ft_printf("Decimal: %d\n", n);
	res1 += printf("Decimal: %d\n", n);
	res += ft_printf("Int: %i\n", i);
	res += ft_printf("Unsigned: %u\n", n);
	res2 += ft_printf("Hexa lowercase: %x\n", n);
	res1 += printf("Hexa lowercase: %x\n", n);
	res2 += ft_printf("Hexa uppercase: %X\n", i);
	res1 += printf("Hexa uppercase: %X\n", i);
	res += ft_printf("Percent: %%\n");
	ft_printf("Res: %d\n", res);
	ft_printf("Res1: %d\n", res1);
	ft_printf("Res2: %d\n", res2);
	ft_printf("String: %s \t Hexa: %x \t Int: %i\n", str, n, i);
	return (0);
}*/

int	main(void)
{
	int		res = 0;
	char	c = 'x';
	char	str[] = "UwU OwO";
	int		n = 42;
	int		i = -123;
	int		*ptr = &i;
	int res1 = 0;
	
	res += ft_printf("AwA\n");
	res += ft_printf("Char: %c\n", c);
	res += ft_printf("String: %s\n", str);
   	res += ft_printf("Pointer: %p\n", ptr);
	res += ft_printf("Decimal: %d\n", n);
	res += ft_printf("Int: %i\n", i);
	res += ft_printf("Unsigned: %u\n", n);
	res += ft_printf("Hexa lowercase: %x\n", n);
	res += ft_printf("Hexa uppercase: %X\n", i);
	res += ft_printf("Percent: %%\n");
	
	res1 += printf("AwA\n");
	res1 +=printf("Char: %c\n", c);
	res1 +=printf("String: %s\n", str);
   	res1 += printf("Pointer: %p\n", ptr);
	res1 += printf("Decimal: %d\n", n);
	res1 += printf("Int: %i\n", i);
	res1 += printf("Unsigned: %u\n", n);
	res1 += printf("Hexa lowercase: %x\n", n);
	res1 += printf("Hexa uppercase: %X\n", i);
	res1 += printf("Percent: %%\n");
	
	ft_printf("Res: %d      res1 : %d\n", res, res1);
	ft_printf("String: %s \t Hexa: %x \t Int: %i\n", str, n, i);
	return (0);
}

/*int	ptr_help(unsigned long int i)
{
	char	*base;
	int	return_value;

	base = "0123456789abcdef";
	return_value = 0;
	if (i >= 16)
		ptr_help(i /16);
	return_value += ft_printchar(base[i % 16]);
	return (return_value);
}*/
