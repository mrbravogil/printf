/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:43:49 by mabravo-          #+#    #+#             */
/*   Updated: 2025/12/02 13:43:51 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	arg;

	va_start(arg, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_format(format[i], arg);
		}
		else
		{
			ft_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end (arg);
	return (count);
}

/*int	main(void)
{
	int	n = 42;
	void *ptr = &n;
	printf("Esta es la dirección de mi puntero: %p\n", ptr);
	ft_printf("Esta es la dirección de mi puntero: %p\n", ptr);
	printf("Hol	a\nho lita");
	return (0);
}*/
