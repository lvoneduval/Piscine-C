/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 04:12:32 by lduval            #+#    #+#             */
/*   Updated: 2016/08/23 10:34:22 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*temp;

	if (*begin_list)
	{
		temp = *begin_list;
		while (temp->next != 0)
			temp = temp->next;
		temp->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
