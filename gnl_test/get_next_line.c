/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:40:24 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/10 15:49:41 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	static char	buf[BUFFER_SIZE + 1];
	char		*tmp;
	int			ret;
	int			i;

	i = ft_index(buf, '\n');
	if (!(!line))
		*line = ft_strnjoin("", buf, i);
	ft_memmove(buf, &buf[i + 1], BUFFER_SIZE - i);
	if (i != -1)
		return (1);
	while ((ret = read(fd, buf, BUFFER_SIZE)) != -1 && line && BUFFER_SIZE)
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
