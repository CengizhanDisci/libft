/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:03:25 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/16 15:31:42 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(const char *s)
{
	int		i;
	i = 0;
	while (s[i])
		i++;
	printf("%d",i);
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
//s1 parametresi ile gösterilen karakter dizisinin,
// n parametre deðeri kadar ilk karakterini, s2 parametresi
// ile gösterilen karakter dizisi ile karsilastirir.
//Eðer her iki karakter dizisindeki tüm karakterler ayni
//ise sifir deðeri, aksi takdirde sifirden farkli bir deðer geri döndürür.
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
//	printf("%s,%s",s1,s2);
	if (n)
	{
		return (*ptr1 - *ptr2);
//		printf("%s,%s",s1,s2);
	}
		else
		return (0);
}
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
/*Bir karakter dizisinin diğer karakter dizisi içinde bulunduğu
 ilk yerin bellek adresini geri döndürür.*/
{
	size_t	n;

	if (*little == 0)
		return ((char *)big);
	n = ft_strlen(little);
	while (*big && n <= len)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}
/* int main()
{
char a[] = "cengizhan";	
	const char b[] = "disci";
	ft_strnstr(a,b,4);
}*/
