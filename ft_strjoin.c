/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:37:31 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 13:27:27 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len;
	int		i;
	int		j;

	j = -1;
	i = 0;
	len = ft_strlen(s1);
	len += ft_strlen(s2);
	if (!(result = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (s1[++j])
	{
		result[i] = s1[j];
		i++;
	}
	j = -1;
	while (s2[++j])
	{
		result[i] = s2[j];
		i++;
	}
	result[i] = '\0';
	return (result);
}
