/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:57:11 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 14:58:15 by cdisci           ###   ########.fr       */
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
	return (i);
}*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
//Src parametresini,dest parametresi ile gösterilen dizinin yerine kopyalar.
{
	size_t	i;

	if (!size)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

/*int main()
{
	char a[] = "cengizhan";	
	 char b[] = "disci";
	ft_strlcpy(a,b,5);
}*/
