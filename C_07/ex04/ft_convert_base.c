/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:46:08 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/21 15:25:21 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);

int	check_base(char	*base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base, char *result)
{
	long int		i;
	long int		nb;

	if (nbr == 0)
		result[0] = (base[0]);
	i = 0;
	nb = nbr;
	if (nb < 0)
	{
		nb *= -1;
	}
	while (nb > 0)
	{
		result[i] = base[nb % ft_strlen(base)];
		nb /= ft_strlen(base);
		i++;
	}
	if (nbr < 0)
		result[i] = '-';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*ptr;
	char		temp;
	int			i;

	i = 0;
	if (check_base(base_to) == 1 || check_base(base_from) == 1)
		return (NULL);
	ptr = malloc(100);
	ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to, ptr);
	if (!ptr)
		return (NULL);
	while (i < ft_strlen(ptr) / 2)
	{
		temp = ptr[i];
		ptr[i] = ptr[ft_strlen(ptr) - i - 1];
		ptr[ft_strlen(ptr) - i - 1] = temp;
		i++;
	}
	return (ptr);
}

int	main () {
	char	nbr [] = "31333";
	char	base_from [] = "0123456789";
	char	base_to [] = "0123456";

	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
}