/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:17:28 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/16 10:07:26 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <bsd/string.h> 

unsigned int	ft_strlen(char	*str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size == 0 || dest_len > size)
		return (src_len + size);
	if (src[i] == '\0')
		return (dest_len);
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*int	main () {

	char	src [] = "he";
	char	dest [] = "there";
	char	src1 [] = "he";
	char	dest1 [] = "there";
	unsigned int	size = 10;
	
	printf("%u\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
	printf("%zu\n", strlcat(dest1, src1, size));
	printf("%s\n", dest1);
}*/