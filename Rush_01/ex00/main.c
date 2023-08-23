/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:27:25 by ketrevis          #+#    #+#             */
/*   Updated: 2023/08/13 16:30:43 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	display_arr(char arr[][4]);
int		input_is_not_valid(char *input);
void	input_to_arr(char *str, char col[2][4], char line[4][2]);
void	store_clues(char *str, char clues[16]);
void	init_arr(char arr[4][4]);
int		solve(int line, int col, char arr[4][4], char clues[16]);
void	filler(char arr[4][4], char *clues);

int	main(int argc, char **argv)
{
	char	arr[4][4];
	char	clues[16];

	if (argc != 2 || input_is_not_valid(argv[1]))
	{
		ft_putstr("Error\n");
		return (0);
	}
	store_clues(argv[1], clues);
	init_arr(arr);
	filler(arr, clues);
	solve(0, 0, arr, clues);
	display_arr(arr);
}
