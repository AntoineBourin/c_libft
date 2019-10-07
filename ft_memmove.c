/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:38:34 by abourin           #+#    #+#             */
/*   Updated: 2019/10/08 15:25:42 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(const void *src)
{
	int			len;
	const char	*csrc;
	
	csrc = src;
	len = 0;
	while (csrc[len])
		len++;
	return len;
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*csrc;
	char		*cdest;
	char		tmp[n];
	size_t		i;

	csrc = src;
	cdest = dest;
	i = 0;
	while (i < n)
	{
		tmp[i] = csrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		cdest[i] = tmp[i];
		i++;
	}

	return ((void *)cdest);
}
