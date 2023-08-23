/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 09:50:41 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/06 18:05:01 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		while (str[i] >= '0' && str[i] <= '9')
		{
		result = result * 10 + str[i] - 48;
		i++;
		}
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc != 3)
	{
		write(1, "Le nombre d'arguments doit etre egal a 2.", 41);
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	if (x <= 0 || y <= 0)
	{
		write(1, "Ecrire que des nombres superieur a 0", 36);
		return (1);
	}
	rush(x, y);
}
