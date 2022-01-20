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

char	*ft_get_line(char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}

void	ft_save_next_line(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	while (s[i])
	{
		s[j] = s[i];
		i++;
		j++;
	}
	while (s[j])
	{
		s[j] = '\0';
		j++;
	}
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			rd;

	rd = 1;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, "", 0) == -1)
		return (NULL);
	line = ft_strinit();
	line = ft_joinandfree(line, buffer);
	while (ft_strchr(buffer) == 0 && rd != 0)
	{
		rd = read(fd, buffer, BUFFER_SIZE);
		buffer[rd] = '\0';
		line = ft_joinandfree(line, buffer);
	}
	if (rd == 0 && line[0] == 0)
	{
		free(line);
		return (NULL);
	}
	line = ft_get_line(line);
	ft_save_next_line(buffer);
	return (line);
}
