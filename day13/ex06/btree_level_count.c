/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 09:32:40 by lduval            #+#    #+#             */
/*   Updated: 2016/08/24 14:42:17 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	t_btree *right;
	t_btree *left;

	left = root->left;
	right = root->right;
	if (root != 0)
	{
		if (btree_level_count(left) > btree_level_count(right))
			return (1 + btree_level_count(left));
		else
			return (1 + btree_level_count(right));
	}
	else
		return (0);
}
