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

char *get_next_line(int fd)
{
    if (fd < 0 || BUFFER_SIZE <= 0 || fd > 1024)
        return (NULL);
}

char    *ft_get_buff(int fd)
{
    char *buffer;
    buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buffer)
        return (NULL);
    buffer = read(fd, buffer, BUFFER_SIZE);
    
}