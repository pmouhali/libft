/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:40:24 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/09 17:24:57 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	static char	buf[BUFFER_SIZE + 1];
	char *tmp;
	int ret;
	int i;

	i = ft_index(buf, '\n');
	if (!(!line))
		*line = ft_strnjoin("", buf, i);
	ft_memmove(buf, &buf[i + 1], BUFFER_SIZE - i);
	if (i != - 1)
		return (1);
	while ((ret = read(fd, buf, BUFFER_SIZE)) != -1 && !(!line))
	{
		if (ret == 0 && *line[0] == 0)
			return (0);
		buf[ret] = '\0';
		i = ft_index(buf, '\n');
		tmp = *line;
		*line = ft_strnjoin(*line, buf, i);
		free(tmp);
		ft_memmove(buf, &buf[i + 1], (i == -1 ? 0 : BUFFER_SIZE - i));
		if (i != -1 || (ret == 0 && *line[0] != 0))
			return (1);
	}
	return (-1);
}

/*
	ft_putendl_fd("=== static buf content at func open ===", 1);
	ft_putstr_fd(buf, 1);
	ft_putendl_fd("==================================", 1);
*/
/*	
	ft_putendl_fd("=== line content at func open ===", 1);
	ft_putstr_fd(*line, 1);
	ft_putendl_fd("==========================", 1);
*/
// How to make read start where he'd stop ? automatic, do not reopen the file
// If buffer size is bigger than line length : keep end of buf in static var
// If buffer size is smaller than line length : reassign line with strjoin ? free previous 
// End of file, last line does not contain '\n' but '\0'.
// If if there is a '\n' in keeped end of buf
// Careful : Buffsize - 1 does not work if buffsize == 1
// Careful : CRTL-D for stdin
// Multiple fd : double tab
/*
			ft_putendl_fd("=== static buf content ===", 1);
			ft_putendl_fd(buf, 1);
			ft_putendl_fd("==========================", 1);
*/
/*	
		ft_putendl_fd("=== line content ===", 1);
		ft_putstr_fd(*line, 1);
		ft_putendl_fd("==========================", 1);
*/
/*
		ft_putendl_fd("=== static buf content ===", 1);
		ft_putstr_fd(buf, 1);
		ft_putendl_fd("==========================", 1);
*/
