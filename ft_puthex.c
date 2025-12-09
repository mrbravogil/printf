/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 13:47:36 by mabravo-          #+#    #+#             */
/*   Updated: 2025/12/09 13:47:39 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int upper)
{
	char	c;
	int		char_c;
	char	*hex;

	char_c = 0;
	if (upper)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (n >= 16)
		char_c += (ft_puthex(n / 16, upper));
	c = hex[n % 16];
	char_c += ft_putchar(c);
	return (char_c);
}
