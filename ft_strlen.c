/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:58:35 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 14:59:18 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//include <stdio.h>
size_t	ft_strlen(const char *s)
//girilen dizinin uzunlugu7
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*int main()
{
 char a[] = "cengiz";
	 ft_strlen(a);

}*/
