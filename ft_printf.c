/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:09:46 by mmajdoub          #+#    #+#             */
/*   Updated: 2022/11/09 09:24:38 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *d, ...)
{
	int		i;
	int		r;
	va_list	ptr;

	i = 0;
	r = 0;
	va_start(ptr, d);
	while (d[i])
	{
		if (d[i] == '%' && d[i + 1] == '\0')
			return (r);
		if (d[i] == '%')
		{
			r += ft_format(d[i + 1], ptr);
			i++;
		}
		else
			r += ft_putchar(d[i]);
		i++;
	}
	va_end(ptr);
	return (r);
}
