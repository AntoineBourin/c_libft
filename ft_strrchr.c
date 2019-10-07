/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:07:49 by abourin           #+#    #+#             */
/*   Updated: 2019/10/08 14:11:40 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	last_index;
	int	i;

	i = 0;
	last_index = -1;

	while (s[i])
	{
		if (c == s[i])
			last_index = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	if (last_index == -1)
		return (NULL);
	else
		return ((char *)(s + last_index));
}
