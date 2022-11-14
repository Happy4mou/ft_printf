/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pta.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:32:43 by mmajdoub          #+#    #+#             */
/*   Updated: 2022/11/07 18:45:48 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pta(size_t n)
{
	size_t	i;
	size_t	r;
	size_t	a;

	i = 0;
	a = n;
	if (a == 0)
		i++;
	while (a)
	{
		a = a / 16;
		i++;
	}
	if (n >= 16)
		pta(n / 16);
	r = n % 16;
	if (r >= 10 && r < 16)
		ft_putchar(r += 87);
	else
		ft_putchar(r += 48);
	return (i);
}
