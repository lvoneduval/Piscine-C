/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 17:51:17 by lduval            #+#    #+#             */
/*   Updated: 2016/08/17 10:03:28 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int j;
	int *range;

	range = NULL;
	i = 0;
	j = max - min;
	if (j <= 0)
		return (range);
	range = (int *)malloc(sizeof(*range) * j);
	while (i < j)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
