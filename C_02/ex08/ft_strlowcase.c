/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:55:08 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/05 17:13:38 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
		str[i] += 32;
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
	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strupcase(str2));
}*/