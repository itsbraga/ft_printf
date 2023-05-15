/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptrHex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:50:47 by panther           #+#    #+#             */
/*   Updated: 2023/05/15 18:09:27 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void    putptrHex(void *ptr)
{
    uintptr_t   address;
    char        *hex;
    int         i;
    int         mod;
    char        corres;

    address = (uintptr_t)ptr;
    hex = "0123456789ABCDEF";
    i = 0;
    while (address != 0)
    {
        mod = address % 16;
        if (mod < 10)
            corres = mod + '0';
        else
            corres = mod - 10 + 'A';
        hex[i] = corres;
        i++;
        address /= 16;
    }
    while (i > 0)
    {
        i--;
        ft_putchar(hex[i]);
    }
}

int main(void)
{
    char    *ptr;

    ptr = "non";
    putptrHex(ptr);
}