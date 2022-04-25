/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:31:14 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 14:32:20 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
/*c parametresi ile gösterilen bellek bölgesindeki karakteri,
s parametresindeki bellek bölgesinin ilk n parametre
değeri kadar byte'ına kopyalar*/
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (s);
}

/*int main()
{
	char a[] = "cengizhan";
	
	ft_memset(a,'a',1);
}*/
