/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 08:28:46 by lduval            #+#    #+#             */
/*   Updated: 2016/08/23 23:33:15 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list *temp;

	temp = begin_list;
	if (begin_list)
	{
		while (temp != NULL)
		{
			if ((*cmp)(temp->data, data_ref) == 0)
				(*f)(temp->data);
			temp = temp->next;
		}
	}
}
