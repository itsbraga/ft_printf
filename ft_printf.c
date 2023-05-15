/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:58:27 by panther           #+#    #+#             */
/*   Updated: 2023/05/15 23:25:17 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/ft_printf.h"

int ft_printParams(va_list args, int format)
{
    int input;

    input = 0;
    if (format == 'c')
        input += ft_printchar(va_arg(args, int));
    else if (format == 's')
        input += ft_printstr(va_arg(args, char *));
    else if (format == 'p')
        input += ft_printptr(va_arg(args, uintptr_t));
    else if (format == 'd' || format == 'i')
        input += ft_printnbr(va_arg(args, int));
    else if (format == 'u')
        input += ft_printUint(va_arg(args, unsigned int));
    else if (format == 'x' || format == 'X')
        input += ft_printHex(va_arg(args, unsigned int), "0123456789ABCDEF");
    else if (format == '%')
        input += ft_printpercent();
    return (input);
}

int	ft_printf(const char *format, ...)
{
	int     i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_printParams(args, format[i + 1]);
			i++;
		}
		else
			len += ft_printchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}

/*int	main(void)
{
	char	*test;

	test = "Check address";
	puts("What my function does:\n");
	ft_printf("c\ns\np\nd\ni\n", 'a', "Møme", test, 42, -2147483647);
	ft_printf("u\nx\nX\n", 5, 42, 7);
	puts("True f:\n");
	printf("%c\n%s\n%p\n%d\n%i\n", 'a', "Møme", test, 42, -2147483647);
	printf("%u\n%x\n%X\n", 5, 42, 7);
}*/