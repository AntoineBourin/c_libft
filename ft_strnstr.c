/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:57:15 by abourin           #+#    #+#             */
/*   Updated: 2019/10/08 16:33:55 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_found(const char *haystack, size_t i, const char *needle, size_t len)
{
	int	needle_index;
	
	needle_index = 0;
	while (needle[needle_index])
	{
		if (i >= len || haystack[i] != needle[needle_index])
			return (0);
		i++;
		needle_index++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		is_found;

	if (!needle[0])
		return ((char *)haystack);
	if (!haystack[0])
		return (NULL);

	i = 0;
	is_found = 0;
	while (i < len)
	{
		if (haystack[i] == needle[0])
		{
			is_found = ft_is_found(haystack, i, needle, len);
			if (is_found == 1)
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

/*int		main(void)
{
	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15));
	}*/
