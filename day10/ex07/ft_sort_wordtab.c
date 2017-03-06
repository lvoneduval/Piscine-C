/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 05:21:58 by lduval            #+#    #+#             */
/*   Updated: 2016/08/19 07:25:16 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	int		count_i;
	char	*tab_temp;

	count_i = 0;
	while (tab[count_i + 1] != 0)
	{
		if (ft_strcmp(tab[count_i], tab[count_i + 1]) > 0)
		{
			tab_temp = tab[count_i];
			tab[count_i] = tab[count_i + 1];
			tab[count_i + 1] = tab_temp;
			count_i = 0;
		}
		count_i++;
	}
}
