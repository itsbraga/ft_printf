/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:45:29 by panther           #+#    #+#             */
/*   Updated: 2023/05/16 19:18:24 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	char	*nbr;
	int		input;

	input = 0;
	nbr = ft_itoa(n);
	input = ft_printstr(nbr);
	free(nbr);
	return (input);
}
