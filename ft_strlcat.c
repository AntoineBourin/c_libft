/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:45:05 by abourin           #+#    #+#             */
/*   Updated: 2019/10/08 16:17:20 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		len;
	int		to_copy;
	int		i;
	size_t	src_len;

	src_len = ft_strlen((char *)src);
	len = ft_strlen(dst);
	to_copy = (int)dstsize - len - 1;
	i = 0;
	while (src[i] && i < to_copy)
	{
		dst[i + len] = src[i];
		i++;
	}
	if (dstsize != 0 && (int)dstsize > len)
	{
		dst[i + len] = '\0';
		return (len + src_len);
	}
	else
	{
		dst[len + 1] = '\0';
		return (src_len + dstsize);
	}
}
