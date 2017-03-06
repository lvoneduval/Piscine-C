/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 08:35:56 by lduval            #+#    #+#             */
/*   Updated: 2016/08/23 23:33:36 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp;
	t_list *result;

	temp = begin_list;
	result = begin_list;
	if (begin_list)
	{
		while (temp != NULL && (*cmp)(result->data, data_ref) != 0)
		{
			if ((*cmp)(temp->data, data_ref) != 0)
				result = temp;
			else if (temp->next == NULL)
				result = NULL;
			temp = temp->next;
		}
	}
	return (result);
}
