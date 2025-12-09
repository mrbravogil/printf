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

#include "ft_printf.h"

int	ft_format(char tmp, va_list arg)
{
	if (tmp == 'd' || tmp == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (tmp == 'u')
		return (ft_putunbr(va_arg(arg, unsigned int)));
	else if (tmp == 'x')
		return (ft_puthex(va_arg(arg, int), 0));
	else if (tmp == 'X')
		return (ft_puthex(va_arg(arg, int), 1));
	else if (tmp == 'c')
		return (ft_putchar((char)va_arg(arg, int)));
	else if (tmp == '%')
		return (ft_putchar('%'));
	else if (tmp == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (tmp == 'p')
		return (ft_putpointer(va_arg(arg, void *)));
	return (0);
}
