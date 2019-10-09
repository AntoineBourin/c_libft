/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:35:38 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 12:48:27 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const char			*str_base;
	const char			*str_to_compare;
	unsigned char		c;
	unsigned char		d;

	str_base = ft_strlen(s1) > ft_strlen(s2) ? s1 : s2;
	str_to_compare = ft_strlen(s1) > ft_strlen(s2) ? s2 : s1;
	i = 0;
	while (str_base[i] && i < n)
	{
		c = (char)s1[i];
		d = (char)s2[i];
		if (str_base[i] != str_to_compare[i])
			return (c - d);
		i++;
	}
	return (0);
}
