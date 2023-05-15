/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panther <panther@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:10:10 by annabrag          #+#    #+#             */
/*   Updated: 2023/05/15 22:56:06 by panther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

/*	Description :
	Cette fonction permet de remplir une zone mémoire,
	identifiée par son adresse et sa taille, avec une
	valeur précise.

	Valeur de retour :
	Après exécution de la fonction, l'adresse de la
	mémoire ré-initialisée vous sera retournée
	(autrement dit la valeur du paramètre *s).
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	unsigned char	s[50];

	puts("Target:");
	strcpy(s, "You're using a function of string.h");
	puts(s);
	puts("\n");

	puts("My function:");
	ft_memset(s, '/', 7);
	puts(s);
	puts("\n");

	puts("Computer's function:");
	memset(s, '/', 7);
	puts(s);
}*/
