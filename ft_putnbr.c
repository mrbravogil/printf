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

#include "libftprintf.h"

void ft_putnbr(int n)
{
    long    i;

    i = n;
    if (i < 0)
        ft_putchar('-');
    if (i >= 10)
    {
        ft_putnbr(i / 10);
        ft_putnbr(i % 10);
    }
    else
    {
        ft_putchar(i + '0');
    }
}