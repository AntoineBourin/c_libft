/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:52:47 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 13:10:56 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char		byte;
	size_t		i;
	char		*result;

	result = s;
	byte = 0;
	i = 0;
	while (i < n)
	{
		result[i] = byte;
		i++;
	}
}
