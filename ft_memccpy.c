/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:28:20 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 12:28:05 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	d;
	char			*result;
	const char		*source;

	source = src;
	result = dst;
	i = 0;
	d = c;
	while (i < n)
	{
		result[i] = source[i];
		if (source[i] == d)
		{
			i++;
			return (dst + i);
		}
		i++;
	}
	return (NULL);
}
