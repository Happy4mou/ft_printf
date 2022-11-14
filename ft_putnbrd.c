/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:08:44 by mmajdoub          #+#    #+#             */
/*   Updated: 2022/11/07 18:27:46 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(long long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		n *= (-1);
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_putnbrd(long nb)
{
	int	len;

	len = ft_len(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbrd(nb / 10);
		ft_putnbrd(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
	return (len);
}
