/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:45:40 by mabravo-          #+#    #+#             */
/*   Updated: 2025/12/04 12:45:43 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_format_num(char *tmp, va_list arg, char *format)
{
	int	i;
	if (*tmp == 'd' || *tmp == 'i' || *tmp == 'u')
	{
		i = va_arg(arg, int);
		ft_putnbr(i);
	}
	if (*tmp == 'x' || *tmp == 'X')
	{
		
	}
}

void	ft_format_cs(char *tmp, va_list arg, char *format)
{
	int	i;
	if (*tmp == 'c')
	{
		i = va_arg(arg, int);
		ft_putchar(i);
	}
	if (*tmp == 's')
	{
		i = va_arg(arg, char *);
		ft_putstr(i);
	}
	if (*tmp == '%')
	{
		ft_putchar('%');
	}
}

void	ft_format(char *tmp, va_list arg, char *format)
{
	while (*tmp)
	{
		if (*tmp == 'c' || *tmp == 's' || *tmp == '%')
		{
			ft_format_cs(tmp, arg, format);
			break;
		}
		if (*tmp == 'p')
		{

		}
		if (*tmp == 'd' || *tmp == 'i' || *tmp == 'u' || *tmp == 'x' || *tmp == 'X')
		{
			ft_format_num(tmp, arg, format);
			break;
		}
	}
}
