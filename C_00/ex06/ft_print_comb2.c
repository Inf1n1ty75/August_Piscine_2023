/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:53:29 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/03 11:20:18 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first_comb;
	int	last_comb;

	first_comb = 0;
	last_comb = 1;
	while (first_comb <= 98)
	{
		while (last_comb <= 99)
		{
			ft_putchar((first_comb / 10) + '0');
			ft_putchar((first_comb % 10) + '0');
			ft_putchar(' ');
			ft_putchar((last_comb / 10) + '0');
			ft_putchar((last_comb % 10) + '0');
			last_comb++;
			if (first_comb != 98)
				write (1, ", ", 2);
		}
		first_comb++;
		last_comb = first_comb + 1;
	}
}

/*int main () {
	ft_print_comb2();
}*/