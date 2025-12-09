/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:45:59 by mabravo-          #+#    #+#             */
/*   Updated: 2025/12/09 14:46:01 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(int n)
{
	unsigned int	i;
	int				c;

	i = n;
	c = 0;
	if (i >= 10)
		c += ft_putunbr(i / 10);
	c += ft_putchar((i % 10) + '0');
	return (c);
}
