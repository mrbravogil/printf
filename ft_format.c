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

void	ft_format(char *tmp, va_list arg, char *format)
{
	int	i;
	while (*tmp)
	{
		if (*tmp == 'c' || *tmp == '%')
		{
			i = va_arg(arg, int);
			ft_putchar(i);
			break;
		}
		if (*tmp == 's' || *tmp == 'p')
		{
			i = va_arg(arg, void *);
			ft_memcpy(i, format, sizeof(void));
			ft_putstr(i);
			break;
		}
		if (*tmp == 'd' || *tmp == 'i' || *tmp == 'u')
		{
			i = va_arg(arg, int);
			ft_putnbr(i, 10);
			break;
		}
		if (*tmp == 'x' || *tmp == 'X')
		{
			i = va_arg(arg, int);
			ft_putnbr(i, 116);
			break;
		}
	}
}
