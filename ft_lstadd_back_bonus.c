/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:57:47 by abourin           #+#    #+#             */
/*   Updated: 2019/10/09 14:53:49 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alstm, t_list *new)
{
	t_list	*tmp;

	tmp = *alstm;
	while (tmp && tmp->next != 0)
		tmp = tmp->next;
	tmp->next = new;
}
