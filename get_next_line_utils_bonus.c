/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbembnis <hbembnis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:45:43 by hbembnis          #+#    #+#             */
/*   Updated: 2022/01/31 15:14:14 by hbembnis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/* Basic function outputing the length of a string */

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* Initializes a string by allocating memory to it and
	setting it to a single '\0' */

char	*ft_strinit(void)
{
	char	*line;

	line = malloc(1 * sizeof(char));
	if (!line)
		return (NULL);
	line[0] = '\0';
	return (line);
}

/* Creates a new string containing the start of the current
	line and the buffer, and frees the memory of the variable
	containing the start of the line to reallocate it to the 
	size of the string */

char	*ft_joinandfree(char *line, char *buffer)
{
	char	*joined;
	int		i;
	int		j;

	joined = malloc((ft_strlen(line) + ft_strlen(buffer) + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	i = 0;
	j = 0;
	while (line[i])
	{
		joined[i] = line[i];
		i++;
	}
	while (buffer[j])
	{
		joined[i] = buffer[j];
		i++;
		j++;
	}
	joined[i] = '\0';
	free(line);
	return (joined);
}

/* Looks for a newline in the buffer */

int	ft_strchr(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (1);
		i++;
	}
	if (buffer[i] == '\n')
		return (1);
	return (0);
}
