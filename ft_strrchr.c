/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:07:34 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 15:08:47 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
char	*ft_strrchr(const char *s, int c)
/*s parametresi ile gösterilen karakter dizisinde
 c parametresi ile gösterilen değerin
son geçtiği yeri arar ve bu bellek adresini
gösteren bir işaretçi geri döndürür.*/
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ptr = (char *)s;
		++s;
	}
	if (c == 0)
	{
		return ((char *)s);
	}
	return (ptr);
}
/*int main()
{
 		char a[] = "cengizhan";	
	ft_strrchr(a,'e');
}*/
