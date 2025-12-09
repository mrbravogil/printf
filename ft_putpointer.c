/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:54:21 by mabravo-          #+#    #+#             */
/*   Updated: 2025/12/02 14:54:23 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexlong(unsigned long n)
{
	char	c;
	int		char_c;
	char	*hex;

	char_c = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		char_c += (ft_puthexlong(n / 16));
	c = hex[n % 16];
	char_c += ft_putchar(c);
	return (char_c);
}

int	ft_putpointer(void *s)
{
	unsigned long	cs;
	int				count;

	if (!s)
		return (ft_putstr("(nil)"));
	cs = (unsigned long )s;
	count = ft_putstr("0x");
	count += ft_puthexlong(cs);
	return (count);
}
