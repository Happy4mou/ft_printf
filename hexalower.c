/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadlower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:04:29 by mmajdoub          #+#    #+#             */
/*   Updated: 2022/11/07 18:34:18 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexalower(unsigned int n)
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
		hexalower(n / 16);
	r = n % 16;
	if (r >= 10 && r < 16)
		ft_putchar(r += 87);
	else
		ft_putchar(r += 48);
	return (i);
}
