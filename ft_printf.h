/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:40:30 by mabravo-          #+#    #+#             */
/*   Updated: 2025/12/02 13:40:34 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putpointer(void *s);
int	ft_putnbr(int n);
int	ft_putunbr(int n);
int	ft_format(char tmp, va_list arg);
int	ft_printf(const char *format, ...);
int	ft_putstr(char *s);
int	ft_puthex(unsigned int n, int upper);

#endif