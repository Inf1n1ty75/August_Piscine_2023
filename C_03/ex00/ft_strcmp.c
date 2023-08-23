/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 12:57:16 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/18 10:00:21 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main () {
	char	str1[] = "hello";
	char	str2[] = "theree";
	char	str3[] = "";
	char	str4[] = "helllllllllo";
	
	printf("<Test 1>\n");
	printf("%d\n", strcmp(str1, str1));
	printf("%d\n", ft_strcmp(str1, str1));
	printf("<Test 2>\n");
	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str1, str2));
	printf("<Test 3>\n");
	printf("%d\n", strcmp(str1, str3));
	printf("%d\n", ft_strcmp(str1, str3));
	printf("<Test 4>\n");
	printf("%d\n", strcmp(str4, str1));
	printf("%d\n", ft_strcmp(str4, str1));
	printf("<Test 5>\n");
	printf("%d\n", strcmp(str3, str4));
	printf("%d\n", ft_strcmp(str3, str4));
}*/