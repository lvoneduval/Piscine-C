/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 22:20:25 by lduval            #+#    #+#             */
/*   Updated: 2016/08/23 23:02:45 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		count_i;
	t_list	*temp;

	temp = begin_list;
	count_i = 0;
	if (temp)
	{
		while (temp->next != 0)
		{
			temp = temp->next;
			count_i++;
		}
		count_i++;
	}
	return (count_i);
}
