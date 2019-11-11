/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:12:40 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/11 13:58:29 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	strlen;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	i = 0;
	while (start >= 0 && start < strlen && i < len && s[i + start] != '\0')
		i++;
	ft_putstr_fd("malloc : ", 1);
	ft_putnbr_fd(i + 1, 1);
	ft_putstr_fd("", 1);
	if ((substr = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	i = 0;
	while (start >= 0 && start < strlen && i < len && s[i + start] != '\0')
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
