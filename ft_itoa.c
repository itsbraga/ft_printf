/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annabrag <annabrag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:08:39 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/16 19:18:12 by annabrag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_digit(int n)
{
	int	len;

	if (n < 0)
		len = 1;
	else
		len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len_d;

	len_d = len_digit(n);
	res = (char *)malloc(sizeof(*res) * (len_d + 1));
	if (!res)
		return (NULL);
	res[len_d] = '\0';
	if (n == 0)
		res[0] = 48;
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n)
	{
		res[--len_d] = n % 10 + 48;
		n /= 10;
	}
	return (res);
}

/*int main(int argc, char **argv)
{
    int argv_c;

    if (argc < 2)
        return (0);
    argv_c = atoi(argv[1]);
    printf("The string contains |%s| in it.", ft_itoa(argv_c));
}*/
