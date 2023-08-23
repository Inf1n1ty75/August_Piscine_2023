/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_backup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:10:51 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/20 18:14:25 by ahors            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_nb_char(int fd_to_read)
{
	int		bytes;
	char	c;
	int		num_char;

	num_char = 0;
	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd_to_read, &c, sizeof(c));
		num_char++;
	}
	close(fd_to_read);
	return (num_char);
}

char	*ft_parsing(int fd_to_read)
{
	int		bytes;
	char	c;
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(sizeof(char) * ft_nb_char(fd_to_read));
	if (!ptr)
		return (NULL);
	fd_to_read = open("numbers.dict", O_RDONLY);
	bytes = 1;
	while (bytes > 0)
	{
		bytes = read(fd_to_read, &c, sizeof(c));
		ptr[i] = c;
		i++;
	}
	close(fd_to_read);
	return (ptr);
}

char	**ft_dict_array(char *ptr, char charset)
{
	char	**dict;

	dict = ft_split(ptr, charset);
	free(ptr);
	return (dict);
}
/*
int	main()
{
	char	**result;
	int fd = open("numbers.dict", O_RDONLY);
	int i = 0;

	result = ft_dict_array(ft_parsing(fd), '\n');
	while(result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free (result);
}
*/
