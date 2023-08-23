/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:59:20 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/14 15:59:29 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
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
		nb, power, ft_recursive_power(nb, power));
		nb++;
		power++;
	}
}*/