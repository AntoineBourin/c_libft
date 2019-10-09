/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:29:11 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 14:52:32 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*result;
	size_t		i;

	i = 0;
	if (!(result = malloc(count * size)))
		return (NULL);
	ft_bzero(result, count * size);
	return (result);
}
