/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneiva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:15:00 by aneiva-d          #+#    #+#             */
/*   Updated: 2024/07/06 14:50:47 by aneiva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include "libft/libft.h"
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_printchar(int	c);
int	ft_printstr(char *s);
int	ft_printptr(unsigned long int ptr);
int	ft_printnbr(int i);
int	ft_printusg(unsigned int	n);
int	ft_printhexa(unsigned int i, char c);
void	ft_helphexa(unsigned int i, char c);
int	check_format(va_list args, char c);

#endif
