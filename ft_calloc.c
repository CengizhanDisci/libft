/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:52:22 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 15:26:17 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <stdio.h>
void    ft_bzero(void *s, size_t n)
Bellekteki alanı sıfırlar
kullanıcıdan alınan s parametresinin
bellekteki yerine 0 değerini atıyoruz
{
    unsigned char    *p;

    p = s;
    while (n)
    {
        *p++ = 0;
        --n;

    }
}*/
void	*ft_calloc(size_t nmemb, size_t size)
/*bellekte yer açar ve 0 değerini atar
nemb=ne kadar bellek boyutu istediğin
size=her elemanın byte boyutu*/
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
