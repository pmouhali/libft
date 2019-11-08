/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:38:19 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/08 15:39:40 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

int	get_next_line(int fd, char **line);
int	ft_index(char const *s, char c);
char	*ft_strndup(const char *s, long n);
char	*ft_strnjoin(char const *s1, char const *s2, long n);
void	*ft_memmove(void *dest, const void *src, unsigned long n);

/* TESTING PURPOSE FUNCTIONS, REMOVE WHEN COMPLETE */
void    ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(char const *s, int fd);

#endif
