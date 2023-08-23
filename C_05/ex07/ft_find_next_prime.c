/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:56:32 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/14 10:17:50 by vopekdas         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) != 1)
			nb++;
	return (nb);
}
/*int	main () {
	int	i;
	int	nb;

	i = 100;
	nb = -10;
	while (i > nb)
	{
		printf("for nb %d, we have %d\n", nb, ft_find_next_prime(nb));
		nb++;
	}
	printf("for int max, we have %d", ft_find_next_prime(2147483647));
}*/