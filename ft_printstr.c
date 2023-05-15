/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:20:51 by panther           #+#    #+#             */
/*   Updated: 2023/05/15 23:13:33 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/ft_printf.h"

int     ft_printstr(char *s)
{
    if (!s)
    {
        ft_printstr("(null)");
        return (6); //Errno
    }
    while (*s)
    {
        ft_printchar(*s);
        s++;
    }
    return (1);
}