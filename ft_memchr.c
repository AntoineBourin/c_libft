/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:49:45 by abourin           #+#    #+#             */
/*   Updated: 2019/10/08 14:10:09 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		comp;
	const char			*cs;
	size_t				i;

	cs = s;
	comp = c;
	i = 0;
	while (i < n)
	{
		if (comp == cs[i])
		{
			return ((void *)cs + i);
		}
		i++;
	}
	return (NULL);
}
