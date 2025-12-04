/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:40:30 by mabravo-          #+#    #+#             */
/*   Updated: 2025/12/02 13:40:34 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>

size_t	ft_strlen(const char *s);
int		ft_putchar(int c);
void	ft_putpointer(const char *s);
void	ft_putnbr(int n, int base);
void	ft_format(char *tmp, va_list arg, char *format);
int		printf(const char *format, ...);



#endif

