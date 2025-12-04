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

#include "libftprintf.h"

int	printf(const char *format, ...)
{
	char				*tmp;
	unsigned int		i;
	va_list				arg;
	
	va_start(arg, format);
	tmp = (char *)format;
	while (*tmp)
	{
		while (*tmp != '\0' && *tmp != '%')
		{
			ft_putchar(*tmp);
			tmp++;
		}
		if (*tmp == '%')
		{
			tmp++;
			ft_format(tmp, arg, format);
		}
	}
	return (*tmp);
	va_end (arg);
}

int	main()
{
	printf("Hol	a\nho lita");
	return (0);

}
