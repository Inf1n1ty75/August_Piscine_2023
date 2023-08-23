/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_clue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:27:29 by ketrevis          #+#    #+#             */
/*   Updated: 2023/08/13 16:32:40 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_down_to_up(int col, char arr[4][4])
{
	int	i;
	int	j;
	int	priority;
	int	visibles;

	i = 3;
	visibles = 1;
	while (arr[i][col] != '4')
		i--;
	while (i < 3)
	{
		i++;
		j = i + 1;
		priority = 0;
		while (j <= 3)
		{
			if (arr[i][col] > arr[j][col])
				priority--;
			j++;
		}
		if (priority == i - 3)
			visibles++;
	}
	return (visibles);
}

int	check_up_to_down(int col, char arr[4][4])
{
	int	i;
	int	j;
	int	priority;
	int	visibles;

	i = 0;
	visibles = 1;
	while (arr[i][col] != '4')
		i++;
	while (i > 0)
	{
		i--;
		j = i - 1;
		priority = 0;
		while (j >= 0)
		{
			if (arr[i][col] > arr[j][col])
				priority++;
			j--;
		}
		if (priority == i)
			visibles++;
	}
	return (visibles);
}

int	check_left_to_right(int line, char clue, char arr[4][4])
{
	int	i;
	int	j;
	int	priority;
	int	visibles;

	i = 0;
	visibles = 1;
	while (arr[line][i] != '4')
		i++;
	while (i > 0)
	{
		i--;
		j = i - 1;
		priority = 0;
		while (j >= 0)
		{
			if (arr[line][i] > arr[line][j])
				priority++;
			j--;
		}
		if (priority == i)
			visibles++;
	}
	return (visibles == clue - 48);
}

int	check_right_to_left(int line, char clue, char arr[4][4])
{
	int	i;
	int	j;
	int	priority;
	int	visibles;

	i = 3;
	visibles = 1;
	while (arr[line][i] != '4')
		i--;
	while (i < 3)
	{
		i++;
		j = i + 1;
		priority = 0;
		while (j <= 3)
		{
			if (arr[line][i] > arr[line][j])
				priority--;
			j++;
		}
		if (priority == i - 3)
			visibles++;
	}
	return (visibles == clue - 48);
}

int	check_double(int row, int col, int num, char arr[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (arr[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (arr[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}
