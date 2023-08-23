/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:20:30 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/20 11:47:30 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	while (src[i])
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

int	ft_strslen(char	**strs, int size)
{	
	int	i;
	int	len_strs;

	i = 0;
	len_strs = 0;
	while (i < size)
	{
		len_strs += ft_strlen(strs[i]);
		i++;
	}
	return (len_strs);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*ptr;

	i = 0;
	if (size == 0)
	{
		ptr = malloc(sizeof(char));
		*ptr = '\0';
		return (ptr);
	}
	ptr = malloc(ft_strslen(strs, size) + (ft_strlen(sep) * (size - 1)) + 1);
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i < size - 1)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}

/*int	main () {
	int size = 4;
	char	*strs [] = {"hello", "bonjour", "test", "okok"};
	char	sep [] = "|";
	
	printf("%s\n", ft_strjoin(size, strs, sep));
	
}*/