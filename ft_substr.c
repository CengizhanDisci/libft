/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:01:43 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/16 15:26:55 by cdisci           ###   ########.fr       */
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
//	printf("%d",i);
	return (i);

}

void	*ft_memcpy(void *dest, const void *src, size_t n)
//src'deki karakterleri n parametre uzunluğunda destteki belleğe kopyalar
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

}

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
//	printf("%s",dst);
	dst[i] = 0;
	return (ft_strlen(src));
}

char	*ft_strdup(const char *s)
//Str parametresi ile gösterilen karakter dizisinin aynısını geri döndürür.
{
	char	*new;
	size_t	len;

	len = ft_strlen(s) + 1;
	new = (char *)malloc(sizeof(*new) * len);
	if (!new)
		return (NULL);
	return ((char *)ft_memcpy(new, s, len));
	
}*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
/*Karakter grubu üzerindeki belirlenen bölgeyi almaya yarar.
 Yani bir isim veya bir cümle üzerindeki belli bir parçayı
 kopyalayıp belirlediğimiz değişkene atamaya yarar.*/
{
	char	*subst;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	subst = (char *)malloc(sizeof(char) * (len + 1));
	if (!subst)
		return (NULL);
	ft_strlcpy(subst, s + start, len + 1);
	return (subst);
}
/*int main()
{
	 char a[] = "cengizhan";	
	ft_substr(a,3,7);

}*/
