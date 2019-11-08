/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:40:24 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/08 14:46:10 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	static char	buf[BUFFER_SIZE + 1];
	int ret;
	int i;

	*line = ft_strndup(buf, -1);
	while ((ret = read(fd, buf, BUFFER_SIZE)))
	{
		buf[BUFFER_SIZE] = '\0';			
		if ((i = ft_index(buf, '\n')) != -1) // if there is a \n in what have been just read
		{
			*line = ft_strndup(buf, i);
			ft_memmove(buf, &buf[i + 1], BUFFER_SIZE);
			/* REMOVE */	
			ft_putendl_fd("=== static buf content ===", 1);
			ft_putendl_fd(buf, 1);
			ft_putendl_fd("==========================", 1);
			/* REMOVE */	
			return (1);
		}
		else
		{
			
		}
	}
	return (-1);
}

// How to make read start where he'd stop ? automatic, do not reopen the file
// If buffer size is bigger than line length : keep end of buf in static var
// If buffer size is smaller than line length : reassign line with strjoin ? free previous 
// End of file, last line does not contain '\n' but '\0'.
// If if there is a '\n' in keeped end of buf
// Careful : Buffsize - 1 does not work if buffsize == 1
// Careful : CRTL-D for stdin
// Multiple fd : double tab
