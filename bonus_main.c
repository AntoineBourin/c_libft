/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:32:10 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 14:30:06 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	c[] = "test";
	char	d[] = "test 2";
	char	e[] = "test 3";
	char	f[] = "test 4";
	t_list	*result;
	t_list	*test1;
	t_list	*test2;
	t_list	*test3;
	t_list	*test4;
	t_list	*test5;

	result = ft_lstnew(c);
	printf("%s\n", (char *)result->content);

	test1 = malloc(sizeof(t_list));
	test2 = malloc(sizeof(t_list));
	test3 = malloc(sizeof(t_list));
	test4 = malloc(sizeof(t_list));
	test5 = malloc(sizeof(t_list));
	test1->next = test2;
	test1->content = c;
	test2->content = d;
	test2->next = NULL;
	test3->content = e;
	test4->content = c;
	test4->next = NULL;
	test5->content = d;
	test5->next = NULL;
	ft_lstadd_front(&test1, test3);
	printf("%s\n", (char *)test1->content);

	printf("%d\n", ft_lstsize(test3));
	ft_lstadd_back(&test4, test5);
	printf("%s\n", (char *)test4->next->content);
	test1 = ft_lstlast(test1);
	printf("%s\n", (char *)test1->content);
}
