/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:54:21 by mabravo-          #+#    #+#             */
/*   Updated: 2025/12/02 14:54:23 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putpointer(const void *s, size_t n)
{
	unsigned char 	*cs;
	int				i;

	cs = (unsigned char *)s;
	i = 0;
	while (&s[i])
	{
		if (n == 1)
			ft_putchar(&s[i]);
		i++;
	}
}
