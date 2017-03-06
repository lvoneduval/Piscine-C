/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 07:14:09 by lduval            #+#    #+#             */
/*   Updated: 2016/08/17 23:53:49 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char *)malloc(sizeof(*str) * (i + 1));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *tab_struct;
	int			i;

	tab_struct = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		tab_struct[i].size_param = ft_strlen(av[i]);
		tab_struct[i].str = av[i];
		tab_struct[i].copy = ft_strdup(av[i]);
		tab_struct[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab_struct[i].str = 0;
	return (tab_struct);
}
