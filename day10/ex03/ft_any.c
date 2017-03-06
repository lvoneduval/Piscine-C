/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 18:34:00 by lduval            #+#    #+#             */
/*   Updated: 2016/08/19 05:41:44 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int count_i;
	int bolean;

	bolean = 0;
	count_i = 0;
	while (tab[count_i] != 0 && bolean != 1)
	{
		bolean = (*f)(tab[count_i]);
		count_i++;
	}
	return ((bolean == 1) ? 1 : 0);
}
