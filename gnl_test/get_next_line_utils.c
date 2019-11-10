/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmouhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:21:58 by pmouhali          #+#    #+#             */
/*   Updated: 2019/11/09 17:25:17 by pmouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* TESTING PURPOSE ONLY, REMOVE FOR PUSH */

void	ft_putendl_fd(char const *s, int fd)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
	write(fd, "\n", 1);
}

void	ft_putchar_fd(char c, int fd) { write(fd, &c, 1); }

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(((n % 10) + 48), fd);
	}
	if (n < 10)
		ft_putchar_fd((n + 48), fd);
}

void	ft_putstr_fd(const char *s, int fd)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
}

/* DO NOT REMOVE THOSE  */
int	ft_index(char const *s, char c)
{
	int i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (i);
//	if (s[i] == 0 && c == 0)
//		return (i);
	return (-1);
}

unsigned long	ft_strlen(const char *s)
{
	unsigned long i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_memmove(void *dest, const void *src, unsigned long n)
{
	unsigned long				i;
	unsigned char		*cdest;
	const unsigned char	*csrc;

	if ((!dest && !src) || dest == src)
		return (dest);
	cdest = dest;
	csrc = src;
	i = 0;
	if (dest <= src)
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	else
		while (n > 0)
		{
			cdest[n - 1] = csrc[n - 1];
			n--;
		}
	return (dest);
}

char	*ft_strnjoin(char const *s1, char const *s2, long n)
{
	char *new;
	unsigned long i;
	long j;

	if (n == -1)
		j = ft_strlen(s2);
	else
	{
		j = 0;
		while (j < n && s2[j])
			j++;
	}
	if (!(new = (char*)malloc(sizeof(char) * (ft_strlen(s1) + j + 1))))
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		new[i] = s1[i];
	n = j;
	j = -1;
	while (s2[++j] != '\0' && j < n)
		new[i + j] = s2[j];
	new[i + j] = '\0';
	return (new);
}
