/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:34:12 by panther           #+#    #+#             */
/*   Updated: 2023/05/15 18:08:50 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>
/*  extern FILE *stdin;
    extern FILE *stdout;
    extern FILE *stderr;
*/
# include <stdarg.h>
/* ************************************************************************** */
/*                                                                            */
/*      Attention! Pour permettre de trouver les paramètres sur la pile       */
/*      d'exécution, il est nécessaire de connaitre au moins un paramètre     */
/*      de la fonction. C'est grace à ce paramètre, qu'une variable de        */
/*      type va_list pourra être initialisée.                                 */
/*                                                                            */
/* ************************************************************************** */
/*
        va_list est une struct contenant :
            - va_argv  :  Permet l'extraction du prochain paramètre passé
                          à la fonction

            - va_copy  :  Permet la copie de la liste d'arguments

            - va_end   :  Permet la libération des ressources acquises pour
                          le parcourt de la liste d'arguments.

            - va_start :  Initialise d'une structure va_list à partir d'un
                          paramètre de la liste.
                                                                             */
int     ft_printf(const char *format, ...);
void    ft_putchar(char c);
int     ft_printchar(char c);
int     ft_printstr(char *s);
void    ft_putnbr(int n);
void	ft_putnbr_uint(unsigned int n);
int     ft_printHex(unsigned int n, const char format);
int     printPercent(char p);

#endif