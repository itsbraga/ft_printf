/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printHex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:41:01 by panther           #+#    #+#             */
/*   Updated: 2023/05/15 23:17:45 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/ft_printf.h"
#include "incs/libft.h"

void    ft_putHex(unsigned int n, const char *format)
{
    if (n >= 16)
	{
		ft_putHex(n / 16, format);
		ft_putHex(n % 16, format);
	}
	else
	{
		if (n < 10)
			ft_putchar_fd(n + 48, 1);
		else
		{
			if (*format == 'x')
				ft_putchar_fd(n - 10 + 'a', 1);
			if (*format == 'X')
				ft_putchar_fd(n - 10 + 'A', 1);
		}
	}
}

int     getHexlen(unsigned int n)
{
    int nlen;

    nlen = 0;
    while (n != 0)
    {
        nlen++;
        n /= 16;
    }
    return (nlen);
}

int     ft_printHex(unsigned int n, const char *format)
{
    if (n == 0)
    {
        ft_putchar_fd('0', 1);
        return (0);
    }
    else
        ft_putHex(n, format);
    return (getHexlen(n));
}