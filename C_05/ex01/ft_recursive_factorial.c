/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:13:19 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/11 11:26:09 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main () {
	int nb;
	int	i;

	nb = -10;
	i = 16;
	while (i > nb)
	{
		printf("for %d, result is %d\n", nb, ft_recursive_factorial(nb));
		nb++;
	}
}*/