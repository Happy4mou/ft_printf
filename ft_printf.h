/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:04:04 by mmajdoub          #+#    #+#             */
/*   Updated: 2022/11/07 18:42:09 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putnbrd(long n);
int	ft_putstr(const char *s);
int	hexalower(unsigned int n);
int	hexaupper(unsigned int n);
int	pta(size_t n);
int	ft_format(char c, va_list a);
int	ft_printf(const char *d, ...);

#endif
