/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:02:53 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 12:31:13 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*result;
	const char	*source;

	source = src;
	result = dst;
	i = 0;
	while (i < n)
	{
		result[i] = source[i];
		i++;
	}
	return (dst);
}
