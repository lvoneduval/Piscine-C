/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 05:46:40 by lduval            #+#    #+#             */
/*   Updated: 2016/08/19 05:47:31 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int count_i;
	int *tab_res;

	tab_res = (int *)malloc(sizeof(int) * length);
	count_i = 0;
	while (count_i < length)
	{
		tab_res[count_i] = (*f)(tab[count_i]);
		count_i++;
	}
	return (tab_res);
}
