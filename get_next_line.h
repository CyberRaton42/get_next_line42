/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbembnis <hbembnis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:51:55 by hbembnis          #+#    #+#             */
/*   Updated: 2022/01/31 16:14:05 by hbembnis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5000

# endif

# include <unistd.h>
# include <stdlib.h>

/* Main functions */
char	*get_next_line(int fd);
char	*ft_get_line(char *line);
void	ft_save_next_line(char *buffer);

/* Additional functons */
int		ft_strlen(char *s);
char	*ft_strinit(void);
char	*ft_joinandfree(char *line, char *buffer);
int		ft_strchr(char *buffer);

#endif