/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:48:23 by mmajdoub          #+#    #+#             */
/*   Updated: 2022/11/07 18:12:46 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char c, va_list a)
{
	int	j;

	j = 0;
	if (c == 'c')
		j += ft_putchar(va_arg(a, int));
	else if (c == 's')
		j += ft_putstr(va_arg(a, char *));
	else if (c == 'u')
		j += ft_putnbrd(va_arg(a, unsigned int));
	else if (c == 'd' || c == 'i')
		j += ft_putnbrd(va_arg(a, int));
	else if (c == 'x')
		j += hexalower (va_arg(a, unsigned int));
	else if (c == 'X')
		j += hexaupper (va_arg(a, unsigned int));
	else if (c == '%')
		j += ft_putchar('%');
	else if (c == 'p')
		j += ft_putstr("0x") + pta(va_arg(a, unsigned long));
	else
		j += ft_putchar(c);
	return (j);
}
