/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:09:34 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 13:08:18 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c != '\0')
	{
		while (s[i])
		{
			if (s[i] == c)
				return ((char *)&(s[i]));
			i++;
		}
	}
	else
	{
		while (s[i])
			i++;
		return ((char *)&(s[i]));
	}
	return (NULL);
}
