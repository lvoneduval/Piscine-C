/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 01:05:26 by lduval            #+#    #+#             */
/*   Updated: 2016/08/24 13:49:07 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *tree;

	tree = 0;
	tree = malloc(sizeof(t_btree));
	if (tree)
	{
		tree->left = 0;
		tree->right = 0;
		tree->item = item;
	}
	return (tree);
}
