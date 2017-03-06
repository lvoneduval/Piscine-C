/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 08:56:44 by lduval            #+#    #+#             */
/*   Updated: 2016/08/17 10:18:50 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int		counter;
	char	backspace;

	backspace = '\n';
	counter = 0;
	while (tab[counter] != 0)
	{
		ft_putstr(tab[counter]);
		counter++;
		ft_putchar(backspace);
	}
}

void	ft_putnbr(int nb)
{
	int nbr[3];

	nbr[1] = nb;
	nbr[0] = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar(50);
			nbr[1] = 147483648;
		}
		else
			nbr[1] = -nb;
	}
	nbr[2] = nbr[1];
	while ((nbr[2] /= 10) > 0)
		nbr[0] = nbr[0] * 10;
	nbr[2] = nbr[1];
	while (nbr[0] > 0)
	{
		ft_putchar((nbr[2] / nbr[0]) + 48);
		nbr[2] %= nbr[0];
		nbr[0] /= 10;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
