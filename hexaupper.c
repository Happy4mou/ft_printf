/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexauppper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:04:01 by mmajdoub          #+#    #+#             */
/*   Updated: 2022/11/07 18:39:19 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexaupper(unsigned int n)
{
	unsigned int	i;
	unsigned int	r;
	unsigned int	a;

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
		hexaupper(n / 16);
	r = n % 16;
	if (r >= 10 && r < 16)
		ft_putchar(r += 55);
	else
		ft_putchar(r += 48);
	return (i);
}
