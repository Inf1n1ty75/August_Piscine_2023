/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:38:00 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/04 14:13:16 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		i++;
		else
			return (0);
	}
	return (1);
}

/*int	main () {
	char	str [] = "Hello";
	char	str1 [] = "H3llo";
	char	str2 [] = "Hell o";
	printf("%s > %d\n",str ,ft_str_is_alpha(str));
	printf("%s > %d\n",str1 ,ft_str_is_alpha(str1));
	printf("%s > %d\n",str2 ,ft_str_is_alpha(str2));
}*/