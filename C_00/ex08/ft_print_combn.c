/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:03:54 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/04 09:36:31 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(char *first_comb, int n, int last_digit)
{
	int	i;

	i = 0;
	if (first_comb[0] == last_digit)
	{
		while (i < n)
		{
			ft_putchar(first_comb[i]);
		i++;
		}
		return ;
	}
	while (i < n)
	{
		ft_putchar(first_comb[i]);
		i++;
	}
	write (1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	first_comb [10];
	char	last_comb [10];
	int		i;
	int		pos;
	int		new_value;

	i = 0;
	while (i < n)
	{
		first_comb[i] = i + '0';
		last_comb[i] = (10 - n) + i + '0';
		i++;
	}
	ft_print(first_comb, n, last_comb[0]);
	while (first_comb[0] != last_comb[0])
	{
		pos = n - 1;
		while (first_comb[pos] == last_comb[pos])
			pos--;
				new_value = ++first_comb[pos];
		while (pos < n)
		first_comb[++pos] = ++new_value;
		ft_print(first_comb, n, last_comb[0]);
	}
}

/*int	main ()
{
	ft_print_combn(2);
}*/
