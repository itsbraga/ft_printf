/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printChar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:20:03 by panther           #+#    #+#             */
/*   Updated: 2023/05/15 17:47:23 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int     ft_printchar(char c)
{
    write(1, &c, 1);
    return (1);
}