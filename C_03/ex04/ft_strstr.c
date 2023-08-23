/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:53:25 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/09 10:11:21 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

/*int	main () {
	char	str [] = "find me";
	char	to_find [] = "find";
	char	str2 [] = "finfind me";
	char	to_find2 [] = "find";
	char	str3 [] = "finfinndfind me";
	char	to_find3 [] = "find";
	char	str4 [] = "finfinndfind me";
	char	to_find4 [] = "found";
	char	to_find5 [] = "";
	
	printf("<test1>\n");
	printf("%s\n", ft_strstr(str,to_find));
	printf("%s\n", strstr(str,to_find));
	printf("<test2>\n");
	printf("%s\n", ft_strstr(str2,to_find2));
	printf("%s\n", strstr(str2,to_find2));
	printf("<test3>\n");
	printf("%s\n", ft_strstr(str3,to_find3));
	printf("%s\n", strstr(str3,to_find3));
	printf("<test4>\n");
	printf("%s\n", ft_strstr(str4,to_find4));
	printf("%s\n", strstr(str4,to_find4));
	printf("<test5>\n");
	printf("%s\n", ft_strstr(str4,to_find5));
	printf("%s\n", strstr(str4,to_find5));
}*/