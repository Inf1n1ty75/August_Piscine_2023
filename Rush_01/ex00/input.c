/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:35:05 by ketrevis          #+#    #+#             */
/*   Updated: 2023/08/13 16:36:25 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

void	store_clues(char *str, char clues[16])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			clues[j] = str[i];
			j++;
		}
		i++;
	}
	clues[j] = '\0';
}

int	input_is_not_valid(char *input)
{
	int	i;
	int	digits;
	int	spaces;

	i = 0;
	digits = 0;
	spaces = 0;
	while (input[i])
	{
		if (is_digit(input[i]) && (input[i + 1] == ' ' || input[i + 1] == '\0'))
			digits++;
		else if (input[i] == ' ' && is_digit(input[i + 1]))
			spaces++;
		else
			return (1);
		input++;
	}
	if (digits != 16 || spaces != 15)
		return (1);
	return (0);
}
