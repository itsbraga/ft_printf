/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:04:44 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/15 22:55:29 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	last;

	last = ft_strlen(s);
	if (!s)
		return (NULL);
	while (last >= 0)
	{
		if ((char)c == s[last])
			return ((char *)s + last);
		last--;
	}
	return (NULL);
}

/*int main(void)
{
	const char  s[]="I like pineapples.";
	const char	c = ",";
    char        *ret1;
    char        *ret2;

    ret1 = ft_strrchr(s, c);
    ret2 = strrchr(s, c);

	puts("string: I like p,inea,pples.\n");
    printf("searchedChar, last occurrence: |%c|\nMy function: %s\n", c, ret1);
    printf("searchedChar, last occurrence: |%c|\nTrue: %s\n", c, ret2);
}*/
