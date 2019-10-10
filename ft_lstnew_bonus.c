/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:41:48 by abourin           #+#    #+#             */
/*   Updated: 2019/10/10 18:28:45 by abourin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*result;

	if (!(result = malloc(1 * sizeof(t_list))))
		return (NULL);
	result->content = (void *)content;
	result->next = NULL;
	return (result);
}
