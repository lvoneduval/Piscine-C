/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 05:21:58 by lduval            #+#    #+#             */
/*   Updated: 2016/08/19 07:26:04 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		count_i;
	char	*tab_temp;

	count_i = 0;
	while (tab[count_i + 1] != 0)
	{
		if ((*cmp)(tab[count_i], tab[count_i + 1]) > 0)
		{
			tab_temp = tab[count_i];
			tab[count_i] = tab[count_i + 1];
			tab[count_i + 1] = tab_temp;
			count_i = 0;
		}
		count_i++;
	}
}
