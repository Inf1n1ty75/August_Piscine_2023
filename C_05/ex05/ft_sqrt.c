/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:23:02 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/21 16:46:17 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*int	main () {
	int	i;
	int nb;

	i = 200;
	nb = -10;
	while (i > nb)
	{
		printf("for nb %d, we have %d\n", nb, ft_sqrt(nb));
		nb++;
	}
	printf("for nb %d, we have %d\n", 2147483647, ft_sqrt(2147483647));
}*/