/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 13:38:13 by lduval            #+#    #+#             */
/*   Updated: 2016/08/12 16:51:08 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int i;
	int result;

	result = tab[0];
	i = 0;
	while (i < legnth)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return (result);
}
