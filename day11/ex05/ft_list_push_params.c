/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 22:27:59 by lduval            #+#    #+#             */
/*   Updated: 2016/08/23 10:31:48 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

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

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;

	i = 0;
	list = NULL;
	while (i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}
	return (list);
}
