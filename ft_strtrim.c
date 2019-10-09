/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:49:38 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 13:19:39 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_get_start_trimmed(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	must_stop;

	i = 0;
	j = 0;
	must_stop = 0;
	while (!must_stop && s1[i])
	{
		j = 0;
		must_stop = 1;
		while (set[j])
		{
			if (s1[i] == set[j])
				must_stop = 0;
			j++;
		}
		i++;
	}
	return (i - 1);
}

int		ft_get_end_trimmed(char const *s1, char const *set, size_t len)
{
	int		i;
	int		j;
	int		must_stop;

	i = len - 1;
	j = 0;
	must_stop = 0;
	while (!must_stop && s1[i])
	{
		j = 0;
		must_stop = 1;
		while (set[j])
		{
			if (s1[i] == set[j])
				must_stop = 0;
			j++;
		}
		i--;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		beg_ind;
	int		end_ind;
	char	*result;
	int		i;

	i = 0;
	beg_ind = ft_get_start_trimmed(s1, set);
	end_ind = ft_get_end_trimmed(s1, set, ft_strlen(s1));
	if (!(result = malloc((end_ind - beg_ind) * sizeof(char))))
		return (NULL);
	while (beg_ind <= end_ind)
	{
		result[i] = s1[beg_ind];
		beg_ind++;
		i++;
	}
	return (result);
}
