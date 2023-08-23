/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 09:50:44 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/06 15:23:49 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	printf_out(int i, int j, int x, int y)
{
	if ((i == 0 || i == x - 1) && (j == 0 || j == y - 1))
	{
		if ((i == 0 && j == 0) || (i == 0 && j == y - 1))
			ft_putchar('A');
		else
			ft_putchar('C');
	}
	else if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			printf_out(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
