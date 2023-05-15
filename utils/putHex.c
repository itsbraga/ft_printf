/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthexMaj.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:41:01 by panther           #+#    #+#             */
/*   Updated: 2023/05/15 18:06:29 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void    ft_putHex(unsigned int n, const char format)
{
    if (n >= 16)
	{
		ft_putHex(n / 16, format);
		ft_putHex(n % 16, format);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + 48);
		else
		{
			if (format == 'x')
				ft_putchar(n - 10 + 'a');
			if (format == 'X')
				ft_putchar(n - 10 + 'A');
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

int     ft_printHex(unsigned int n, const char format)
{
    if (n == 0)
    {
        ft_putchar('0');
        return ;
    }
    else
        ft_putHex(n, format);
    return (getHexlen(n));
}