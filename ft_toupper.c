/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:12:24 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 15:41:03 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int a)
/*kücügü büyük yapar
ascii*/
{
	if (a >= 'a' && a <= 'z')
		return (a - 32);
	return (a);
}
