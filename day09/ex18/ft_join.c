/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 13:43:10 by lduval            #+#    #+#             */
/*   Updated: 2016/08/12 14:02:20 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_join(char **tab, char *sep)
{
	int i;
	int j;
	int compteur;
	char *b;

	compteur = 0;
	i = 0;
	j = 0;
	while (tab[i])
	{
		while(tab[i][j])
		{
			compteur++;
			j++;
		}
		compteur++;
		i++;
		j = 0;
	}
	b = malloc(sizeof(char) * (compteur));
	b = join(tab, sep, b);
	return b;
}

char *join(char **tab, char *sep, char *b)
{
	int i;
	int j;
	int compt;
	
	compt = 0;
	i = 0;
	j = 0;
	while(tab[i])
	{
		while(tab[i][j])
		{
			b[i + j + compt] = tab[i][j];
			j++;
		}
		b[i + j + compt] = *sep;
		j = 0;

	}
}
