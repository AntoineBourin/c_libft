/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:07:19 by abourin           #+#    #+#             */
/*   Updated: 2019/10/07 18:06:02 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	char 	*b;
	const char	src[50] = "Asfereqq";
	char	*dst;
	char	*t;
	char	s1[50] = "Tesarqweqe";
	char	s2[50] = "T";

	dst = malloc(2);
	b = malloc(5);
	
	memset((void *)b, 51, 5);
	printf("memset : %s\n", b);
	ft_memset((void *)b, 51, 5);
	printf("ft_memset : %s\n", b);

	ft_bzero((void *)b, 5);
	printf("ft_bzero : %s\n", b);
	bzero((void *)b, 5);
	printf("bzero : %s\n", b);

	ft_memcpy((void *)dst, src, 4);
	printf("ft_memcpy : %s\n", dst);
	memcpy((void *)dst, src, 4);
	printf("memcpy : %s\n", dst);
	
	t = memccpy((void *)dst, src, 65, 4);
	printf("memccpy : %c // %s\n", t[1], dst);
	t = ft_memccpy((void *)dst, src, 65, 4);
	printf("ft_memccpy : %c // %s\n", t[1], dst);

	ft_memmove((void *)dst, src, 4);
	printf("ft_memmove : %s\n", dst);
	memmove((void *)dst, src, 4);
	printf("memmove : %s\n", dst);

	printf("ft_memchr : %s\n", ft_memchr(src, 115, 2));
	printf("memchr : %s\n", memchr(src, 115, 2));

	printf("ft_memcmp : %d\n", ft_memcmp(s1, s2, 5));
	printf("memcmp : %d\n", memcmp(s1, s2, 5));

	printf("strchr : %s\n", strchr(src, 135));
	printf("ft_strchr : %s\n", ft_strchr(src, 135));
}
