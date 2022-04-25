/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 11:32:50 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/16 11:47:39 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
/*s parametresi ile gösterilen bellek bölgesinin n parametre değeri kadar ik
 byte'ında c parametresi ile
  gösterilen değerin
 ilk geçtiği yeri arar ve bu bellek adresini gösteren
 bir işaretçi geri döndürür. */
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n && *ptr != (unsigned char)c)
	{
		++ptr;
		--n;
	}
	if (n)
		return ((void *)ptr);
	else
		return (NULL);
}
/*int main()
{
    const char a[] = "cengiz";
    ft_memchr(a,4,3);
}*/
