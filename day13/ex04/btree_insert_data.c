/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 06:13:41 by lduval            #+#    #+#             */
/*   Updated: 2016/08/25 16:33:50 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root,
		void *item, int (*cmpf)(void *, void *))
{
	if (*root == 0)
	{
		*root = btree_create_node(item);
	}
	else if ((*cmpf)(item, (*root)->item) < 0)
	{
		if ((*root)->left)
			btree_insert_data(&((*root)->left), item, cmpf);
		else
			(*root)->left = btree_create_node(item);
	}
	else
	{
		if ((*root)->right)
			btree_insert_data(&((*root)->right), item, cmpf);
		else
			(*root)->right = btree_create_node(item);
	}
}
