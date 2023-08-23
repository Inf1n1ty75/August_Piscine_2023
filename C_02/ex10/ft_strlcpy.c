/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:30:35 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/07 09:21:22 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if ((i < size - 1 && size != 0))
		{
			dest[i] = src[i];
			j++;
		}
		i++;
	}
	if (size != 0)
	dest[j] = '\0';
	return (i);
}

/*int	main () {

	char	src [] = "helloo";
	char	dest [] = "there";
	char	src1 [] = "helloo";
	char	dest1 [] = "there";
	int	size = 3;
	
	printf("%u\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
	printf("%zu\n", strlcpy(dest1, src1, size));
	printf("%s\n", dest1);
}*/