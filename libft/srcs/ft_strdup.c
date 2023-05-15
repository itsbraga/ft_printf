/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:00:35 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/15 22:55:47 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	slen;
	char	*dup;

	slen = ft_strlen(str);
	dup = (char *)malloc(sizeof(char) * (slen + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%s\n", ft_strdup(argv[1]));
}*/
