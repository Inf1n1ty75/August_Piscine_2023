/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:26:51 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/11 11:58:54 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*int	main () {
	int nb;
	int	i;
	int power;
	
	power = 0;
	nb = -10;
	i = 4;
	while (i > nb)
	{
		printf("for %d power %d, result is %d\n", 
		nb, power, ft_iterative_power(nb, power));
		nb++;
		power++;
	}
}*/