/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosmont <mosmont@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:51:48 by mosmont           #+#    #+#             */
/*   Updated: 2024/11/18 16:25:36 by mosmont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# include <string.h>

char	*get_next_line(int fd);
char	*read_line(int fd, char *buffer, char *line);
void	cut_buffer(char *buffer);

char	*ft_strjoin(char *string1, char *string2);
int		check_eof(char *string);
size_t	eof_index(char *string);

#endif