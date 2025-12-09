/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:47:01 by mabravo-          #+#    #+#             */
/*   Updated: 2025/12/02 15:47:03 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long int	i;
	int			c;

	i = n;
	c = 0;
	if (i < 0)
	{
		c += ft_putchar('-');
		i = -i;
	}
	if (i >= 10)
		c += ft_putnbr(i / 10);
	c += ft_putchar((i % 10) + '0');
	return (c);
}
