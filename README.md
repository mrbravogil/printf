# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.md                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+          #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/15 11:40:53 by mabravo-          #+#    #+#              #
#    Updated: 2025/12/15 11:40:56 by mabravo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

_This project has been created as part of the 42 curriculum by mabravo-_

# FT_PRINTF

42 Common Core Project where I recreated C's printf function.
Printf() function is used to print formatted output to the standard output 
stdout (which is generally the console screen).

## Description
For this project a created a library which copies the internal workings of 
the original function. Where the function receives a list of arguments and
prints them in the right format:

Learnt the use of <stdarg.h> header, which defines a variable type va_
list and three macros which can be used to get the arguments in a function 
when the number of arguments are not known:
- va_start
- va_end
- va_arg
Modified functions used in my past libft project, so they'd return the 
number of characters they printed:
- ft_putchar
- ft_putnbr 
- ft_putunbr
- ft_putstr
Recreated functions to print pointers, hexadecimal numbers and select printing
format:
- ft_format
- ft_putpointer
- ft_puthex

## Instructions

To use this project you may just download this repository and create the
library by using the make command. Then compile your function with following 
command:
gcc ft_printf.c -L. -lftprintf -o your_programme

## Resources
- stdarg.h and printf manual
- Different blog and forum post where the inner working of printf() 
where explained.
- Mostly used AI as tool to understand the concepts of pointer and hexadecimal 
printing.