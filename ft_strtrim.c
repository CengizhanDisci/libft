/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:09:10 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 15:29:23 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
//setten gelen stringleri s1in baş ve sonundan siler
{
	char	*trimmed;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1))
		++s1;
	end = ft_strlen(s1);
	while (end > 0 && ft_strchr(set, s1[end - 1]))
		--end;
	trimmed = (char *)malloc(end + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1, end + 1);
	return (trimmed);
}
