/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 11:28:59 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/16 11:29:31 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcounter(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			return (i);
		while (*s != c && *s)
			s++;
		i++;
	}
	return (i);
}

static int	charcounter(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s && (*s != c))
	{
		i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
//diziyi böler
{
	char	**ret;
	int		retindex;

	if (!s)
		return (0);
	retindex = 0;
	ret = malloc(sizeof(char *) * wordcounter(s, c) + 1);
	if (!ret)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			break ;
		ret[retindex] = ft_substr(s, 0, charcounter(s, c));
		retindex++;
		s = s + charcounter(s, c);
	}
	ret[retindex] = NULL;
	return (ret);
}
