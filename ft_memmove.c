/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:26:02 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 14:30:37 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memcpy(void *dest, const void *src, size_t n)
src'deki karakterleri n parametre uzunluğunda destteki belleğe kopyalar
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n-- > 0)
		*d++ = *s++;
	//printf("%s,%s",src,dest);
	return (dest);
}*/

void	*ft_memmove(void *dest, const void *src, size_t n)
/*Src parametresi ile gösterilen bellek bölgesindeki karakterleri,
n parametre değeri kadar uzunlukta, dest parametresindeki
bellek bölgesine kopyalar.*/
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n--)
		d[n] = s[n];
	return (dest);
}

/*int main()
{
    char s1[] = "cengizhan";
    char s2[] = "disci";
   ft_memmove(s1,s2,5);
}*/
