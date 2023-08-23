/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:58:10 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/06 12:40:46 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		i++;
		else
			return (0);
	}
	return (1);
}

/*int	main () {
	char	str [] = "12342";
	char	str1 [] = "Hel\nlo";
	char	str2 [] = "HELLO";
	printf("%s > %d\n",str, ft_str_is_printable(str));
	printf("%s > %d\n",str1, ft_str_is_printable(str1));
	printf("%s > %d\n",str2, ft_str_is_printable(str2));
}*/