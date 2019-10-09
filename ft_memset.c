/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:42:45 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 13:08:06 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	d;
	unsigned char	*result;

	d = c;
	i = 0;
	result = b;
	while (i < len)
	{
		result[i] = d;
		i++;
	}
	return (b);
}
