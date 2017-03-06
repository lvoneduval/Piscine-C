/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 22:21:56 by lduval            #+#    #+#             */
/*   Updated: 2016/08/23 10:34:50 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *temp;

	temp = begin_list;
	if (begin_list)
	{
		while (temp->next)
			temp = temp->next;
	}
	return (temp);
}
