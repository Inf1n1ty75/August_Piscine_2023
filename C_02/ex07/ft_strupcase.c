/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:45:18 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/06 12:43:07 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] -= 32;
		i++;
		}
		else
		i++;
	}
	return (str);
}

/*int	main () {
	char	str [] = "12342";
	char	str1 [] = "Hello";
	char	str2 [] = "HELLO";
	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
}*/