/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:33:27 by ketrevis          #+#    #+#             */
/*   Updated: 2023/08/13 16:40:07 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_up_to_down(int col, char clue, char arr[4][4]);
void	fill_down_to_up(int col, char clue, char arr[4][4]);
void	fill_left_to_right(int line, char clue, char arr[4][4]);
void	fill_right_to_left(int line, char clue, char arr[4][4]);

void	filler(char arr[4][4], char *clues)
{
	int	i;

	i = 0;
	while (clues[i])
	{
		if (i <= 3 && (clues[i] == '4' || clues[i] == '1'))
			fill_up_to_down(i, clues[i], arr);
		else if (i <= 7 && (clues[i] == '4' || clues[i] == '1'))
			fill_down_to_up(i, clues[i], arr);
		else if (i <= 11 && (clues[i] == '4' || clues[i] == '1'))
			fill_left_to_right(i, clues[i], arr);
		else if (i <= 15 && (clues[i] == '4' || clues[i] == '1'))
			fill_right_to_left(i, clues[i], arr);
		i++;
	}
}

void	init_arr(char arr[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			arr[i][j] = '0';
			j++;
		}
		i++;
	}
}
