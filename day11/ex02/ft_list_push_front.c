/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 08:23:55 by lduval            #+#    #+#             */
/*   Updated: 2016/08/23 10:30:18 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *temp;

	temp = ft_create_elem(data);
	if (temp)
	{
		temp->next = *begin_list;
		*begin_list = temp;
	}
}
