/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:55:55 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/03 18:01:25 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main () {
	int a = 21;
	int b = 42;
	int *ptr = &a;
	int *ptr2 = &b;

	ft_swap(ptr, ptr2);
	printf("%d\n%d", a, b);
}*/