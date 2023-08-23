/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:27:10 by ketrevis          #+#    #+#             */
/*   Updated: 2023/08/13 16:31:19 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_double(int row, int col, int num, char arr[4][4]);

void	iterate_to_next_empty(int *line, int *col, char arr[4][4])
{
	while (*line <= 3)
	{
		*col = 0;
		while (arr[*line][*col] != '0' && *col <= 3)
		{
			*col += 1;
		}
		if (arr[*line][*col] == '0')
			return ;
		*line += 1;
	}
}

int	solve(int line, int col, char arr[4][4])
{
	int	num;

	num = '1';
	if (line == 3 && col == 3)
		return (1);
	iterate_to_next_empty(&line, &col, arr);
	if (arr[line][col] != '0')
		return (solve(line, col + 1, arr));
	if (col == 4)
		solve(line + 1, 0, arr);
	while (num <= '4')
	{
		if (check_double(line, col, num, arr))
		{
			arr[line][col] = num;
			if (solve(line, col + 1, arr))
				return (1);
		}
		num++;
	}
	return (0);
}
