/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:55:19 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 13:14:57 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char *cs2;
	const unsigned char *cs1;

	cs1 = s1;
	cs2 = s2;
	i = 0;
	while (i < n)
	{
		if (cs1[i] != cs2[i])
		{
			return (int)(cs1[i] - cs2[i]);
		}
		i++;
	}
	return (0);
}
