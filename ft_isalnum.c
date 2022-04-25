/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 11:36:04 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/16 11:43:51 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_isalpha(int c)
//karakter kontrolu ascii tablo
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

#include "libft.h"

int	ft_isdigit(int c)
//sayi kontrolu ascii tablosu
{
	return (c >= 48 && c <= 57);
}*/
int	ft_isalnum(int a)
/*karakter ve sayı kontrolu
ascii tablosu*/
{
	return (ft_isalpha(a) || ft_isdigit(a));
}

/*int main()
{
    ft_isalnum(5);
}
*/
