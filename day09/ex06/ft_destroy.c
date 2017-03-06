/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 00:24:29 by lduval            #+#    #+#             */
/*   Updated: 2016/08/12 16:07:46 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (factory[i])
	{
		{
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		i++;
		j = 0;
	}
	free(factory);
	factory == NULL;
}
