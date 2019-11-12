/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:11:22 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/12 12:04:11 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_index_static(char const *s, char c)
{
	int i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (i);
	return (-1);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		i1;
	int		i2;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (ft_index_static(set, s1[i]) != -1 && s1[i] != '\0')
		i++;
	i1 = i;
	while (s1[i] != '\0')
		i++;
	i--;
	while (ft_index_static(set, s1[i]) != -1 && i > 0)
		i--;
	i2 = i;
	i = i2 - i1 < 0 ? 1 : (i2 - i1) + 2;
	if ((new = (char *)malloc(sizeof(char) * i)) == NULL)
		return (NULL);
	i = -1;
	while (++i + i1 <= i2)
		new[i] = s1[i + i1];
	new[i] = '\0';
	return (new);
}
