/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 22:43:24 by lduval            #+#    #+#             */
/*   Updated: 2016/08/17 04:19:06 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int		ft_strlendob(int argc, char **argv)
{
	int i;
	int j;
	int k;

	k = 0;
	j = 1;
	i = 0;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			i++;
			k++;
		}
		j++;
		k++;
	}
	return (k - 1);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tab;

	if (argc != 1)
	{
		i = 1;
		j = ft_strlendob(argc, argv);
		tab = (char *)malloc(sizeof(*tab) * j);
		while (i < argc)
		{
			tab = ft_strcat(tab, argv[i]);
			i++;
			if (i < argc)
			{
				tab = ft_strcat(tab, "\n");
			}
		}
	}
	else
	{
		tab = (char *)malloc(sizeof(*tab) * 1);
		tab[0] = '\0';
	}
	return (tab);
}
