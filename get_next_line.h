/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbembnis <hbembnis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:51:55 by hbembnis          #+#    #+#             */
/*   Updated: 2022/01/20 15:11:55 by hbembnis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>

char	*get_next_line(int fd);
int		ft_strlen(char *s);
char	*ft_strinit(void);
char	*ft_joinandfree(char *s1, char *s2);
int		ft_strchr(char *s);

#endif