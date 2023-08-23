/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:14:44 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/21 13:20:24 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

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

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = malloc(ft_strlen(src) + 1);
	if (!ptr)
		return (NULL);
	return (ft_strcpy(ptr, src));
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*ptr;

	i = 0;
	if (ac < 1)
	ac = 0;
	ptr = malloc(sizeof(*ptr) * ac + 1);
	if (!ptr)
		return (NULL);
	while (i < ac)
	{
	ptr[i].size = ft_strlen(av[i]);
	ptr[i].str = av[i];
	ptr[i].copy = ft_strdup(av[i]);
	i++;
	}
	ptr[i].str = 0;
	return (ptr);
}

/*int	main (int argc, char**argv) {
	
	t_stock_str		*ptr;
	int i = 0;
	ptr = ft_strs_to_tab(argc, &argv[i]);
	while (i < argc)
	{
		printf("%d\n", ptr[i].size);
		printf("%s\n", ptr[i].str);
		printf("%s\n", ptr[i].copy);
		i++;
	}
}*/