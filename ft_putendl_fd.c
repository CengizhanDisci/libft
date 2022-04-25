/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:34:21 by cdisci            #+#    #+#             */
/*   Updated: 2022/01/15 14:35:24 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_putstr_fd(char *s, int fd)
çıktıya dize yazar
{
	int i;

	i = 0;
	if (s)
		while (s[i] != '\0')
			write(fd, &s[i++], 1);
}*/

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
