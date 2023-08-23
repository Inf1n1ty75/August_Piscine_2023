/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:10:44 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/06 10:44:05 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main() {
	char	src [] = "hello";
	char	dest [] = "wor";
	char	src2 [] = "hello";
	char	dest2 [] = "wor";
	printf("%s\n", strcpy(dest, src));
	printf("%s\n", ft_strcpy(dest2, src2));
}*/