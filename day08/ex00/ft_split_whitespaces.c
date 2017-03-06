/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 14:35:11 by lduval            #+#    #+#             */
/*   Updated: 2016/08/17 04:30:11 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		nb_words(char *str)
{
	int i;
	int mod;
	int count;

	count = 0;
	i = 0;
	mod = 1;
	while (str[i])
	{
		if ((str[i] != ' ') && (str[i] != '\t') && (str[i] != '\n') && mod == 1)
		{
			mod = 0;
			count++;
		}
		else if ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && !mod)
			mod = 1;
		i++;
	}
	return (count);
}

int		nb_char(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i);
}

char	*put_str(char *tab_char, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		tab_char[i] = str[i];
		i++;
	}
	tab_char[i] = '\0';
	return (tab_char);
}

char	**fill_tab(char **tab_str, int *tab_size, char *str)
{
	int i;
	int mod;
	int cnt;

	cnt = 0;
	i = 0;
	mod = 1;
	while (str[i])
	{
		if ((str[i] != ' ') && (str[i] != '\t') && (str[i] != '\n') && mod == 1)
		{
			tab_size[cnt] = nb_char(str + i);
			mod = 0;
			tab_str[cnt] = (char*)malloc(sizeof(char) * (tab_size[cnt] + 1));
			tab_str[cnt] = put_str(tab_str[cnt], str + i);
			cnt++;
		}
		else if ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && !mod)
			mod = 1;
		i++;
	}
	tab_str[cnt] = 0;
	return (tab_str);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab_str;
	int		nb_word;
	int		*tab_size;

	if (*str)
	{
		nb_word = nb_words(str);
		if (nb_word != 0)
		{
			tab_size = (int*)malloc(sizeof(int) * nb_word);
			tab_str = (char**)malloc(sizeof(char*) * (nb_word + 1));
			tab_str = fill_tab(tab_str, tab_size, str);
		}
	}
	if (str[0] == '\0' || nb_word == 0)
	{
		tab_str = (char**)malloc(sizeof(char*) * 1);
		tab_str[0] = 0;
	}
	return (tab_str);
}
