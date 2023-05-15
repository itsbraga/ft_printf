/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:45:29 by panther           #+#    #+#             */
/*   Updated: 2023/05/15 23:07:21 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/ft_printf.h"
#include "incs/libft.h"

int     ft_printnbr(int n)
{
    char    *nbr;
    int     input;

    input = 0;
    nbr = ft_itoa(n);
    input = ft_printstr(nbr);
    free(nbr);
    return (input);
}