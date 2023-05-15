/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printNbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:45:29 by panther           #+#    #+#             */
/*   Updated: 2023/05/15 18:16:43 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void     ft_putnbr(int n)
{
    long    nb;

    nb = (long)n;
    if (nb < 0)
    {
        nb = -nb;
        ft_putchar('-');
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        nb %= 10;
    }
    else
        ft_putchar(nb + 48);
}

int     ft_printnbr(int n);