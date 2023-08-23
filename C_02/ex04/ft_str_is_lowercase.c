/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:37:39 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/04 14:13:47 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		i++;
		else
			return (0);
	}
	return (1);
}

/*int	main () {
	char	str [] = "12342";
	char	str1 [] = "Hello";
	char	str2 [] = "hello";
	printf("%s > %d\n",str, ft_str_is_lowercase(str));
	printf("%s > %d\n",str1, ft_str_is_lowercase(str1));
	printf("%s > %d\n",str2, ft_str_is_lowercase(str2));
}*/