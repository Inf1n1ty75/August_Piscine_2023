/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:19:45 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/04 14:13:40 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		i++;
		else
			return (0);
	}
	return (1);
}

/*int	main () {
	char	str [] = "12342";
	char	str1 [] = "H3llo";
	char	str2 [] = "Hell o";
	printf("%s > %d\n",str, ft_str_is_numeric(str));
	printf("%s > %d\n",str1, ft_str_is_numeric(str1));
	printf("%s > %d\n",str2, ft_str_is_numeric(str2));
}*/