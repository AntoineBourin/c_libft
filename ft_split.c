/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 08:58:16 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 12:47:58 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_words_count(char const *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] && s[i - 1] != c)
			words++;
		i++;
	}
	return (words);
}

int		ft_fill_result_index(char *result, char const *s,
							int *beg_ind, int limit)
{
	int	i;

	i = 0;
	if (!(result = malloc((limit - *beg_ind + 1) * sizeof(char))))
		return (0);
	while ((*beg_ind) < limit)
	{
		result[i] = s[(*beg_ind)];
		i++;
		(*beg_ind)++;
	}
	(*beg_ind)++;
	result[i] = '\0';
	return (1);
}

int		ft_fill_result(char **result, char const *s, char c)
{
	int		beg_ind;
	int		i;
	int		w_ind;

	w_ind = 0;
	i = 0;
	beg_ind = 0;
	while (s[i])
	{
		if (s[i] == c && (!s[i - 1] || s[i - 1] == c))
			beg_ind++;
		else if (s[i] == c)
		{
			if (!ft_fill_result_index(result[w_ind], s, &beg_ind, i))
				return (0);
			w_ind++;
		}
		i++;
	}
	if (i != beg_ind && s[i - 1] != c)
		if (!ft_fill_result_index(result[w_ind], s, &beg_ind, i))
			return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**result;

	words = get_words_count(s, c);
	if (!(result = malloc((words + 1) * sizeof(char *))))
		return (NULL);
	if (!ft_fill_result(result, s, c))
		return (NULL);
	result[words] = NULL;
	return (result);
}
