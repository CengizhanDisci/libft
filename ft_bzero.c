/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:51:55 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 13:52:04 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
/*Bellekteki alanı sıfırlar
kullanıcıdan alınan s parametresinin
bellekteki yerine 0 değerini atıyoruz */
{
	unsigned char	*p;

	p = s;
	while (n)
	{
		*p++ = 0;
		--n;
	}
}

/*int main() {
  const char a[] = "cengiz";
  ft_bzero(a,2);
}
*/
