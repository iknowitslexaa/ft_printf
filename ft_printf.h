/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:40:25 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/07/13 15:40:45 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include "libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_printchar(int c);
int		ft_printstr(char *s);
int		ft_printptr(unsigned long long ptr);
int		ft_printnbr(int i);
int		ft_printusg(unsigned int n);
int		ft_printhexa(unsigned int i, char c);
void	ft_helphexa(unsigned int i, char c);
int		check_format(va_list args, char c);

void	test_c(void);
void	test_s(void);
void	test_di(void);
void	test_u(void);
void	test_x(void);
void	test_p(void);
void	test_f(void);
#endif
