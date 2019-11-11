/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:56:46 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/11 16:05:13 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *str, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*str == c)
		str++;
	while (str[i])
	{
		if (str[i] != c && i > 0 && str[i - 1] == c)
			j++;
		i++;
	}
	if (i == 0)
		return (0);
	return (j + 1);
}

static int		ft_ccnt(char const *str, int index, char c)
{
	int i;

	i = 0;
	while (str[index] && str[index] != c)
	{
		i++;
		index++;
	}
	return (i);
}

static int		ft_sstrcpy(char *dest, char const *src, int index, char c)
{
	int i;

	i = 0;
	while (src[index] && src[index] != c)
	{
		dest[i] = src[index];
		index++;
		i++;
	}
	dest[i] = '\0';
	return (index);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		tabsize;

	if (!s)
		return (NULL);
	tabsize = ft_count_words(s, c);
	i = 0;
	j = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (tabsize + 1))))
		return (tab);
	while (i < tabsize)
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		if (!(tab[i] = (char*)malloc(sizeof(char) * (ft_ccnt(s, j, c) + 1))))
			return (NULL);
		j = ft_sstrcpy(tab[i], s, j, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
