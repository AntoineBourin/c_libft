/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:07:54 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 12:30:44 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_lst(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list	*curr;
	t_list	*prec;
	t_list	*first;
	t_list	*tmp;
	int		count;

	count = ft_count_lst(lst);
	tmp = lst;
	prec = NULL;
	if (!(curr = malloc(sizeof(t_list))))
		return (NULL);
	while (lst)
	{
		curr = f(lst);
		if (prec)
			prec->next = curr;
		else
			first = curr;
		prec = curr;
		lst = lst->next;
	}
	return (first);
}
