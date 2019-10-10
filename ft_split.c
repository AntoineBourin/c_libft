/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:13:30 by abourin           #+#    #+#             */
/*   Updated: 2019/10/10 09:06:59 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_c_in_cs(char c, char cs)
{
	if (c == cs)
		return (1);
	return (0);
}

char	*ft_end_str(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (&str[i]);
}

char	*ft_copy(char *str, char c)
{
	int		i;
	char	*res;
	char	*clone_str;

	i = 0;
	clone_str = ft_end_str(str, c);
	if (clone_str == str)
		return (0);
	res = malloc(clone_str - str + 1);
	if (res == 0)
		return (0);
	while (i < clone_str - str)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

int		ft_malloc_size(char const *str, char c)
{
	int		i;
	int		count;

	i = 0;
	if (ft_c_in_cs(str[0], c))
		count = 0;
	else
		count = 1;
	while (str[i + 1])
	{
		if (ft_c_in_cs(str[i], c) && !ft_c_in_cs(str[i + 1], c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		size;
	int		i;
	char	*clone_str;

	clone_str = (char *)s;
	i = 0;
	size = ft_malloc_size(s, c);
	res = malloc((size + 1) * sizeof(char *));
	while (i < size)
	{
		if (ft_copy(clone_str, c))
		{
			res[i] = ft_copy(clone_str, c);
			clone_str = ft_end_str(clone_str, c);
			i++;
		}
		while (ft_c_in_cs(*clone_str, c))
			clone_str++;
	}
	res[i] = 0;
	return (res);
}
