/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:59:02 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/04 14:13:57 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		i++;
		else
			return (0);
	}
	return (1);
}

/*int	main () {
	char	str [] = "12342";
	char	str1 [] = "Hello";
	char	str2 [] = "HELLO";
	printf("%s > %d\n",str, ft_str_is_uppercase(str));
	printf("%s > %d\n",str1, ft_str_is_uppercase(str1));
	printf("%s > %d\n",str2, ft_str_is_uppercase(str2));
}*/