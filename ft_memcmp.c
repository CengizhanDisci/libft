/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:55:51 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 14:25:10 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*desti src ile karşılaştırır. Eğer her iki bellek bölgesindeki
tüm değerler aynı ise
sıfır değeri, aksi takdirde sıfırdan farklı bir değer geri döndürür.*/
int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n && *d == *s)
	{
		++d;
		++s;
		--n;
	}
	if (n)
		return (*d - *s);
	else
		return (0);
}
/*int main()
{
   const char s1[] = "cengizhan";
   const char s2[] = "cengiz";
   ft_memcmp(s1,s2,5);
}*/
