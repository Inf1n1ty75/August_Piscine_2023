/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clue_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:37:04 by ketrevis          #+#    #+#             */
/*   Updated: 2023/08/13 16:37:05 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_up_to_down(int col, char clue, char arr[4][4])
{
	int		i;
	char	c;

	i = 0;
	c = '1';
	if (clue == '4')
	{
		while (i < 4)
		{
			arr[i][col % 4] = c;
			c++;
			i++;
		}
	}
	else if (clue == '1')
	{
		arr[0][col % 4] = '4';
	}
}

void	fill_down_to_up(int col, char clue, char arr[4][4])
{
	int		i;
	char	c;

	i = 0;
	c = '4';
	if (clue == '4')
	{
		while (i < 4)
		{
			arr[i - 1][col] = c;
			c--;
			i++;
		}
	}
	else if (clue == '1')
	{
		arr[3][col % 4] = '4';
	}
}

void	fill_left_to_right(int line, char clue, char arr[4][4])
{
	int		i;
	char	c;

	i = 0;
	c = '1';
	if (clue == '4')
	{
		while (i < 4)
		{
			arr[line % 4][i] = c;
			c++;
			i++;
		}
	}
	else if (clue == '1')
	{
		arr[line % 4][0] = '4';
	}
}

void	fill_right_to_left(int line, char clue, char arr[4][4])
{
	int		i;
	char	c;

	i = 0;
	c = '4';
	if (clue == '4')
	{
		while (i < 4)
		{
			arr[line % 4][i] = c;
			c--;
			i++;
		}
	}
	else if (clue == '1')
	{
		arr[line % 4][3] = '4';
	}
}
