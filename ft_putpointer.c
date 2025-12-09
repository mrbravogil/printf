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

void	ft_swap(char *b, int i)
{
	char	tmp;
	int		j;
	int		e;

	j = 0;
	e = i - 1;
	while (i > 0)
	{
		tmp = b[j];
		b[j] = b[i];
		b[i] = tmp;
		j++;
		e--;
	}
	b[i] = '\0';
}

int	ft_hexcal(unsigned long cs, char *b)
{
	unsigned long	r;
	char			hex;
	int				i;

	i = 0;
	while (cs > 0)
	{
		r = cs % 16;
		if (r < 10)
			hex = r + '0';
		else
			hex = (r - 10) + 'a';
		b[i] = hex;
		i++;
		cs /= 16;
	}
	return (i);
}

int	ft_putpointer(void *s)
{
	unsigned long	cs;
	char			b[17];
	int				i;

	cs = (unsigned long )s;
	if (!cs)
	{
		ft_putstr("0x0");
		return (3);
	}
	i = ft_hexcal(cs, b);
	ft_swap(b, i);
	ft_putstr("0x");
	ft_putstr(b);
	return (i);
}
