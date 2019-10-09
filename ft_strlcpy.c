/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:39:14 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 13:16:53 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *src)
{
	size_t	len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	return (len);
}

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > ft_strlen(src))
		dst[ft_strlen(src)] = '\0';
	else
		dst[dstsize - 1] = '\0';
	return (ft_strlen(src));
}
