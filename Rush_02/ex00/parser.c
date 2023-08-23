/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 10:46:52 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/19 20:22:33 by vopekdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	ft_line(int fd_to_read)
{
	int		bytes;
	char	c;
	int		num_line;

	fd_to_read = open("numbers.dict", O_RDONLY);
	num_line = 0;
	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd_to_read, &c, sizeof(c));
		if (c == '\n')
		num_line++;
	}
	close(fd_to_read);
	return (num_line);
}

char	**creattab(int fd_to_read, int num_line, int bytes)
{
	char	c;
	int		i;
	char	**dict_array;
	int		j;
	char	temp[100];

	bytes = 1;
	j = 0;
	i = 0;
	dict_array = malloc(sizeof(char *) * num_line);
	if (!dict_array)
		return (NULL);
	while (bytes > 0)
	{
		bytes = read(fd_to_read, &c, sizeof(c));
		temp[i] = c;
		if (c == '\n')
		{
			dict_array[j] = malloc(sizeof(char) * i);
			if (!dict_array)
				return (NULL);
			ft_strncpy(dict_array[j], temp, i);
			j++;
			i = -1;
		}
		i++;
	}
	close(fd_to_read);
	return (dict_array);
}
/*int	main()
{
	char	**str;
	int		fd_to_read;
	int		nb;
	int		i;
	int		b;

	i = 0;
	fd_to_read = open("numbers.dict", O_RDONLY);

	nb = ft_line(fd_to_read);
	str = creattab(fd_to_read, nb, 1);
	while (str[i])
	{
		b = 0;
		while (str[i][b] != '\0')
		{
			write(1, &str[i][b], 1);
			b++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}*/