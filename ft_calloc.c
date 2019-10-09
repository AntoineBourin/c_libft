/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:29:11 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 14:37:18 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int			*result;
	size_t		i;

	i = 0;
	result = malloc(count * size);
	while (i < count)
	{
		*(result + i) = 0;
		i++;
	}
	return (result);
}
