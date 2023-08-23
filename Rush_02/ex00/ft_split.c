/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vopekdas <vopekdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:15:20 by vopekdas          #+#    #+#             */
/*   Updated: 2023/08/20 16:24:57 by ahors            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_sep(char sep, char c)
{
	if (sep == c)
		return (1);
	return (0);
}

int	count_sep(char *str, char sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (is_sep(sep, *str))
		{
			count++;
		}
		str++;
	}
	return (count);
}

char	*copy_words(char *str, char sep, int *length)
{
	int		len;
	char	*start;
	char	*ptr;

	start = str;
	while (*str && !is_sep(sep, *str))
		str++;
	len = str - start;
	*length = len;
	ptr = malloc(sizeof(char) * len + 1);
	ft_strncpy(ptr, start, len);
	return (ptr);
}

char	**ft_split(char *str, char charset)
{
	int		i;
	char	**result;
	int		len;

	i = 0;
	result = malloc(sizeof(char *) * (count_sep(str, charset) + 2));
	if (!result)
		return (NULL);
	while (*str)
	{
		len = 0;
		if (!is_sep(charset, *str))
		{
			result[i] = copy_words(str, charset, &len);
			i++;
		}
		str += len + 1;
	}
	result[i] = NULL;
	return (result);
}
