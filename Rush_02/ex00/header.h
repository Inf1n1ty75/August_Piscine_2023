/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahors <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:49:23 by ahors             #+#    #+#             */
/*   Updated: 2023/08/20 18:26:31 by ahors            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_letter(char *str);
char	**ft_split(char *str, char charset);
char	**ft_split(char *str, char charset);
void	ft_strstr(char **str, char *to_find);
void	ft_putstr(char *str);
void	ft_errexit(void);
void	ft_atoi(char *str);
void	ft_display_hundred(char *nb, char **dict);
void	ft_display(char *nb, char **dict);
void	ft_putchar(char c);
int		ft_strlen(char *str);

#endif
