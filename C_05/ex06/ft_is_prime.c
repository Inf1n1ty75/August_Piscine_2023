/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:02:10 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/14 10:17:08 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (1 + nb > i * i)
	{
		if (nb % i == 0)
			return (0);
	i++;
	}
	return (1);
}

/*int	main () {
	int	i;
	int	nb;

	i = 100;
	nb = -10;
	while (i > nb)
	{
		//if (ft_is_prime(nb) != 0)
		printf("for nb %d, we have %d\n", nb, ft_is_prime(nb));
		nb++;
	}
	printf("for int max, we have %d", ft_is_prime(2147483647));
}*/