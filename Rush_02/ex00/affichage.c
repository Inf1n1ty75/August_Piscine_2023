/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahors <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:31:26 by ahors             #+#    #+#             */
/*   Updated: 2023/08/20 18:17:20 by ahors            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_display_hundred(char *nb, char **dict)
{	
	int		nb_len;
	char	*tempo;
	char	*test;

	nb_len = ft_strlen(nb);
	if (nb_len == 3)
	{
		//Afficher le premier caractere
		ft_strstr(dict, &nb[0]);
		//Afficher la centaine
		ft_strstr(dict, "100");
		//Copie les deux chiffres restants pour la suite
		ft_strncpy(nb, &nb[1], 2);
	}
	if (nb_len == 2)
	{
		if (nb[0] != '0')
		{	
			//Afficher les deux si inferieur a 20 
			//Afficher un a un si superieur a 20
			//Afficher la dizaine
			tempo = ft_strcpy(tempo, nb);
			tempo[1] = '0';
			//Afficher l'unite
		}
		ft_strncpy(nb, &nb[1], 1);
	}
	//if (nb[0] != '0)	
		//Afficher le caractere
	//Afficher la puissance
	//String de la taille totale, remplie de 0000 puis aller la chercher
}

void	ft_display(char *nb, char **dict)
{
	int		nb_len;
	int		i;
	char	*dest;	

	i = 0;
	nb_len = ft_strlen(nb);
	if (nb_len % 3 == 0)
	{
		ft_strncpy(dest, nb, 3);
		ft_display_hundred(dest, dict);
	}
	else if (nb_len % 3 == 2)
	{
		ft_strncpy(dest, nb, 2);
		ft_display_hundred(dest, dict);
	}
	else
	{
		ft_strncpy(dest, nb, 1);
		ft_display_hundred(dest, dict);
	}
}
