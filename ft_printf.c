/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:58:27 by panther           #+#    #+#             */
/*   Updated: 2023/05/15 18:16:26 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"

int formatCheck(va_list args, int format)
{
    int len;

    len = 0;
    if (format == 'c')
        len += ft_printchar(va_arg(args, int));
    else if (format == 's')
        len += ft_printstr(va_arg(args, char *));
    else if (format == 'p')
        len += putptrHex(va_arg(args, uintptr_t));
    else if (format == 'd' || format == 'i')
        len += ft_printnbr(va_arg(args, int));
    else if (format == 'u')
        len += ft_print_uint(va_arg(args, unsigned int));
    else if (format == 'x' || format == 'X')
        len += ft_printHex(va_arg(args, unsigned int), format);
    else if (format == '%')
        len += printPercent();
    return (len);
}

int ft_printf(char const *format, ...);