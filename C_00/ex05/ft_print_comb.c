/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:37:43 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/03 11:19:50 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_print_comb(void)
{
	char	first_digit;
	char	second_digit;
	char	third_digit;

	first_digit = '0';
	second_digit = '1';
	third_digit = '2';
	while (first_digit < '7')
	{
		while (second_digit <= '8')
		{
			while (third_digit <= '9')
			{
				ft_print(first_digit, second_digit, third_digit);
				write(1, ", ", 2);
				third_digit++;
			}
			second_digit++;
			third_digit = second_digit + 1;
		}
			second_digit = first_digit + 1;
			first_digit++;
	}
	write (1, "789", 3);
}

/*int main () {
    ft_print_comb();
}*/
