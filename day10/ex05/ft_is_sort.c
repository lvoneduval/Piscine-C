/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 05:44:01 by lduval            #+#    #+#             */
/*   Updated: 2016/08/19 05:45:25 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int count_i;
	int trie;

	trie = 0;
	count_i = 0;
	while ((count_i < length - 1) && trie == 0)
	{
		if ((*f)(tab[count_i], tab[count_i + 1]) < 0)
			trie = 1;
		count_i++;
	}
	if (trie == 0)
		return (1);
	count_i = 0;
	while ((count_i < length - 1) && trie == 1)
	{
		if ((*f)(tab[count_i], tab[count_i + 1]) > 0)
			trie = 0;
		count_i++;
	}
	return (trie);
}
