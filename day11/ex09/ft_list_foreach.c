/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 08:19:29 by lduval            #+#    #+#             */
/*   Updated: 2016/08/23 22:22:16 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *temp;

	temp = begin_list;
	if (begin_list)
	{
		while (temp != NULL)
		{
			(*f)(temp->data);
			temp = temp->next;
		}
	}
}
