/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_Uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:44:08 by panther           #+#    #+#             */
/*   Updated: 2023/05/15 18:15:04 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_putnbr_uint(unsigned int n)
{
	if (n > 9)
	{
		ft_putnbr_uint(n / 10);
		n %= 10;
	}
	ft_putchar(n % 10 + 48);
}

int		ft_print_uint(int n);