/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 23:32:16 by lduval            #+#    #+#             */
/*   Updated: 2016/08/23 10:32:15 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	temp = NULL;
	while (*begin_list != NULL)
	{
		temp = *begin_list;
		*begin_list = temp->next;
		free(temp);
	}
}
