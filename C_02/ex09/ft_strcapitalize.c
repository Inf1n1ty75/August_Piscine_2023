/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:58:02 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/08 09:34:26 by vopekdas         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (cap == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i - 1] >= '0' && str[i - 1] <= '9')
			cap = 0;
			else
			{
			str[i] -= 32;
			cap = 0;
			}
			i++;
		}
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			cap = 1;
		i++;
	}
	return (str);
}

/*int	main () {
	char str [] = "Re*kt17+Lol Mdr Mdr 4242l42";
	printf("%s", ft_strcapitalize(str));
}*/