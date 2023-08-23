/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:25:23 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/06 14:11:26 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main() {
	char	src [] = "hello";
	char	dest [] = "wor";
	char	src2 [] = "hello";
	char	dest2 [] = "wor";
	unsigned int	n = 2;
	printf("%s\n", strncpy(dest, src,n));
	printf("%s\n", ft_strncpy(dest2, src2,n));
}*/