/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hdecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadie <smadie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:32:04 by smadie            #+#    #+#             */
/*   Updated: 2021/11/04 19:01:06 by smadie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal(long nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		i = ft_putstr("-2147483648");
		return (i);
	}
	if (nb < 0)
	{
		i += ft_putchar('-');
		i += ft_decimal(-nb);
	}
	else if (nb >= 10)
	{
		i += ft_decimal(nb / 10);
		i += ft_putchar((nb % 10) + '0');
		return (i);
	}
	else
		i += ft_putchar(nb + '0');
	return (i);
}

int	ft_Hexdecimal(unsigned long int nb)
{
	int	i;

	i = 0;
	if (nb > 9)
	{
		if (nb >= 10 && nb <= 15)
		{
			i += ft_putchar(nb + 'a' - 10);
			return (i);
		}
		else
		{
			i += ft_Hexdecimal(nb / 16);
			i += ft_Hexdecimal((nb % 16 ));
			return (i);
		}
	}
	else
		i += ft_putchar(nb + '0');
	return (i);
}

int	ft_hexdecimal(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb > 9)
	{
		if (nb >= 10 && nb <= 15)
		{
			i += ft_putchar(nb + 'A' - 10);
			return (i);
		}
		else
		{
			i += ft_hexdecimal(nb / 16);
			i += ft_hexdecimal((nb % 16));
			return (i);
		}
	}
	else
		i += ft_putchar(nb + '0');
	return (i);
}

int	ft_phexdecimal(unsigned long long int nb)
{
	int	i;

	i = 0;
	i = ft_putstr("0x");
	i += ft_Hexdecimal(nb);
	return (i);
}
