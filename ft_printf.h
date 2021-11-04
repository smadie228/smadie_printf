/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadie <smadie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:08:13 by smadie            #+#    #+#             */
/*   Updated: 2021/11/04 18:59:59 by smadie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
char	*ft_strchr(const char *s, int c);
int		ft_putstr(char *str);
int		ft_decimal(long nb);
int		ft_Hexdecimal(unsigned long int nb);
int		ft_hexdecimal(unsigned int nb);
int		ft_phexdecimal(unsigned long long int nb);

#endif
