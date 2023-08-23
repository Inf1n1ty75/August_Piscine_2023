/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:45:58 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/21 14:09:44 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

int	check_whitespace(char	*base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (1);
		i++;
	}
	return (0);
}

int	check_base2(char	*base)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
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

int	check_sign(char	*str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i])
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{	
	int	i;
	int	j;
	int	result;

	i = 0;
	j = 0;
	result = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	if (check_base2(base) == 1 || check_whitespace(base) == 1)
		return (0);
	while ((str[i] && str[i] > 13) && str[i] != 32)
	{
		j = 0;
		while (base[j])
		{
			if (base[j] == str[i])
				result = result * ft_strlen(base) + j;
			j++;
		}
		i++;
	}
	return (result * check_sign(str));
}
