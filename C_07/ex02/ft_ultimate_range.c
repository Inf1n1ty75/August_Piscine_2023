/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:27:18 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/18 09:42:22 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*ptr;
	int		size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = malloc(sizeof(int) * (max - min));
	if (!ptr)
		return (-1);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	*range = ptr;
	return (size);
}

/*int	main () {
	int	min = 1;
	int max = 4;
	int i = 0;
	int	*range;

	printf("taile = %d\n", ft_ultimate_range(&range, min, max));
	while (min + i < max)
	{	printf("%d ", range[i]);
		i++;
	}
}*/