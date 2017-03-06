/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 03:49:42 by lduval            #+#    #+#             */
/*   Updated: 2016/08/23 10:28:43 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list	*list;

	list = NULL;
	list = malloc(sizeof(t_list));
	if (list)
	{
		list->next = NULL;
		list->data = data;
	}
	return (list);
}
