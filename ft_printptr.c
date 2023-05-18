/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:50:47 by panther           #+#    #+#             */
/*   Updated: 2023/05/16 18:14:25 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(uintptr_t n)
{
	if (n >= 16)
	{
		ft_putptr(n / 16);
		ft_putptr(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar_fd(n + 48, 1);
		else
			ft_putchar_fd(n - 10 + 'a', 1);
	}
}

int	get_ptrlen(uintptr_t n)
{
	int	nlen;

	nlen = 0;
	while (n != 0)
	{
		nlen++;
		n /= 16;
	}
	return (nlen);
}

/* ************************************************************************** */
/*                                                                            */
/*      The intptr_t and uintptr_t types are extremely useful for casting     */
/*      pointers when you want to do address arithmetic. They should be       */
/*      used instead of long or unsigned long for this purpose.               */
/*                                                                            */
/* ************************************************************************** */
//  Here, you put the address pointed by ptr
//
int	ft_printptr(uintptr_t ptr)
{
	int	input;

	input = 0;
	if (!(void *)ptr)
		input += write(1, "(nil)", 5);
	else
	{
		input += write(1, "0x", 2);
		ft_putptr(ptr);
		input += get_ptrlen(ptr);
	}
	return (input);
}
