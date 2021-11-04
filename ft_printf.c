/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadie <smadie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:07:52 by smadie            #+#    #+#             */
/*   Updated: 2021/11/04 18:49:31 by smadie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

int	chek_simbol(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (c == 'd' || c == 'i' )
		return (ft_decimal(va_arg(ap, int)));
	if (c == 'u')
		return (ft_decimal(va_arg(ap, unsigned int)));
	if (c == 'x')
		return (ft_Hexdecimal(va_arg(ap, unsigned int)));
	if (c == 'X')
		return (ft_hexdecimal(va_arg(ap, unsigned int)));
	if (c == 'p')
		return (ft_phexdecimal(va_arg(ap, unsigned long long int)));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			count += chek_simbol(format[++i], ap);
			i++;
		}
		else
		{
			count += ft_putchar(format[i]);
			i++;
		}
	}
	va_end (ap);
	return (count);
}
