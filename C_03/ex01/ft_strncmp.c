/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:05:48 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/10 09:58:23 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main () {
	char	str1[] = "hello";
	char	str2[] = "theree";
	char	str3[] = "";
	char	str4[] = "helllllllllo";
	unsigned int	n = 2;
	
	printf("<Test 1>\n");
	printf("%d\n", strncmp(str1, str1, __LDBL_HAS_QUIET_NAN__));
	printf("%d\n", ft_strncmp(str1, str1, n));
	printf("<Test 2>\n");
	printf("%d\n", strncmp(str1, str2, n));
	printf("%d\n", ft_strncmp(str1, str2, n));
	printf("<Test 3>\n");
	printf("%d\n", strncmp(str1, str3, n));
	printf("%d\n", ft_strncmp(str1, str3, n));
	printf("<Test 4>\n");
	printf("%d\n", strncmp(str4, str1, n));
	printf("%d\n", ft_strncmp(str4, str1, n));
}*/