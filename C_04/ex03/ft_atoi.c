/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:42:13 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/10 17:56:13 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - 48;
			i++;
		}
		return (result * sign);
	}
	return (result * sign);
}

/*int	main() {
	char	nb []= "10";
	char	nb2 []= "42";
	char	nb3 []= "---++42abc475";
	char	nb4 []= "--42abc475";
	char	nb5 []= "    	--42777777abc475";

	printf("%s > %d\n", nb, ft_atoi(nb));
	printf("%s > %d\n", nb2, ft_atoi(nb2));
	printf("%s > %d\n", nb3, ft_atoi(nb3));
	printf("%s > %d\n", nb4, ft_atoi(nb4));
	printf("%s > %d\n", nb5, ft_atoi(nb5));
}*/