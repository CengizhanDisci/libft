/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:46:58 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 15:27:14 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memcpy(void *dest, const void *src, size_t n)
{
//src'deki karakterleri n parametre uzunluğunda destteki belleğe kopyalar
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n-- > 0)
		*d++ = *s++;
	//printf("%s",dest);
	return (dest);
}

size_t	ft_strlen(const char *s)
//girilen dizinin uzunlugu
{
	int		i;
	i = 0;
	while (s[i])
		i++;
	return (i);
} */
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
}
/*int main()
{
    const char a[] = "cengiz";
	ft_strdup(a);
}*/
