/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:29:11 by abourin           #+#    #+#             */
/*   Updated: 2019/10/08 14:07:48 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int			*result;
	size_t		i;

	i = 0;
	result = malloc(count * size);
	while (i < count)
	{
		*(result + (i * size)) = 0;
	}
	return (result);
}
