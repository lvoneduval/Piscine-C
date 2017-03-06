/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 02:13:54 by lduval            #+#    #+#             */
/*   Updated: 2016/08/23 10:04:24 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*current;
	t_list	*next;
	t_list	*prev;

	if (*begin_list != NULL)
	{
		current = *begin_list;
		prev = NULL;
		next = (*begin_list)->next;
		while (next != NULL)
		{
			(*begin_list) = next;
			current->next = prev;
			prev = current;
			next = next->next;
			current = (*begin_list);
		}
		current->next = prev;
	}
}
