/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 17:51:17 by lduval            #+#    #+#             */
/*   Updated: 2016/08/16 22:42:30 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;

	i = 0;
	j = max - min;
	if (j <= 0)
	{
		j = 0;
		*range = 0;
	}
	else
	{
		*range = (int *)malloc(sizeof(int) * j);
		while (i < j)
		{
			(*range)[i] = min + i;
			i++;
		}
	}
	return (j);
}
