/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:59:42 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 15:01:21 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
/*s1 parametresi ile gösterilen karakter dizisinin, n parametre deðeri
 kadar ilk karakterini, s2 parametresi ile gösterilen karakter
 dizisi ile karsilastirir.
Eðer her iki karakter dizisindeki tüm karakterler ayni
ise 0 değilse farklı değer döndürür*/
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n && *ptr1 && *ptr1 == *ptr2)
	{
		++ptr1;
		++ptr2;
		--n;
	}
	if (n)
	{
		return (*ptr1 - *ptr2);
	}
	else
		return (0);
}

/*int main()
{
		 char a[] = "cengizhan";	
	const char b[] = "disci";
	ft_strncmp(a,b,4);

}*/
