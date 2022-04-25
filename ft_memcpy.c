/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:48:46 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 15:21:46 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
/*src'deki karakterleri n parametre uzunluğunda destteki belleğe kopyalar*/
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}

/*int main()
  {
	 char a[] = "cengizhan";	
	const char b[] = "disci";
	ft_memcpy(a,b,4);
  }*/
