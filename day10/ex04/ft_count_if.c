/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 05:42:50 by lduval            #+#    #+#             */
/*   Updated: 2016/08/19 05:43:12 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int count_i;
	int result;

	result = 0;
	count_i = 0;
	while (tab[count_i] != 0)
	{
		if ((*f)(tab[count_i]) == 1)
			result++;
		count_i++;
	}
	return (result);
}
