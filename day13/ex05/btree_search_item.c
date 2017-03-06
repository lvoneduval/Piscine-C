/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 07:53:13 by lduval            #+#    #+#             */
/*   Updated: 2016/08/24 14:32:52 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (!root)
		return (0);
	if (root->left != 0)
		if (btree_search_item(root->left, data_ref, cmpf) != 0)
			return (btree_search_item(root->left, data_ref, cmpf));
	if ((*cmpf)(data_ref, root->item) == 0)
		return (root->item);
	else if (root->right)
		if (btree_search_item(root->right, data_ref, cmpf) != 0)
			return (btree_search_item(root->right, data_ref, cmpf));
	return (0);
}
