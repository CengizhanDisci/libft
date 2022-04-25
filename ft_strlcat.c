/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:55:29 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 14:56:28 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(const char *s)
//girilen dizinin uzunlugu7
{
	int		i;
	i = 0;
	while (s[i])
		i++;
	//	printf("%s",s);
	return (i);
//	printf("%s",s);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
//srcyi dstle birlestirir
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
/*
int main()
{
     char s1[] = "cengizhan";
    char s2[] = "disci";
   ft_strlcat(s1,s2,4);
}*/
