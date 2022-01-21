/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbembnis <hbembnis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:16:55 by hbembnis          #+#    #+#             */
/*   Updated: 2022/01/18 14:16:55 by hbembnis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* Function erases everything following the newline (if there's one),
	from the output string, thus leaving only the last read line */

char	*ft_get_line(char *line)
{
	int	i;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (line[i] == '\n')
		i++;
	while (line[i])
	{
		line[i] = '\0';
		i++;
	}
	return (line);
}

/* Function erases what has already been saved from the buffer and
	resets it with what's left to output when get_next_line function
	is called again */

void	ft_save_next_line(char *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		i++;
	while (buffer[i])
	{
		buffer[j] = buffer[i];
		i++;
		j++;
	}
	while (buffer[j])
	{
		buffer[j] = '\0';
		j++;
	}
}

/* Main function : goal is to read a file line by line.
	fd : file descriptor of said file
	rb : number of bytes read
	buffer : string containing current read function output
	line : get_next_line output string */

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			rb;

	rb = 1;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, "", 0) == -1)
		return (NULL);
	line = ft_strinit();
	line = ft_joinandfree(line, buffer);
	while (ft_strchr(buffer) == 0 && rb != 0)
	{
		rb = read(fd, buffer, BUFFER_SIZE);
		buffer[rb] = '\0';
		line = ft_joinandfree(line, buffer);
	}
	if (rb == 0 && line[0] == 0)
	{
		free(line);
		return (NULL);
	}
	line = ft_get_line(line);
	ft_save_next_line(buffer);
	return (line);
}
