/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 05:49:37 by lduval            #+#    #+#             */
/*   Updated: 2016/08/19 05:54:41 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "str.h"
#include "opp.h"
#include "ft_opp.h"

int		ft_atoi(char *str)
{
	int i;
	int number_atoi;
	int is_neg;

	is_neg = 1;
	i = 0;
	number_atoi = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_neg = -1;
		i++;
	}
	while (str[i] && (str[i] <= '9') && (str[i] >= '0'))
	{
		number_atoi *= 10;
		number_atoi += (str[i] - 48);
		i++;
	}
	return (is_neg * number_atoi);
}

void	treatment(char *opp, int nb_a, int nb_b)
{
	int count_i;

	count_i = 0;
	while (count_i < 5)
	{
		if (!ft_strcmp(opp, g_opptab[count_i].opp_char))
		{
			if (((count_i == 3) || (count_i == 4)) && !nb_b)
			{
				if (count_i == 3)
					ft_putstr("Stop : division by zero\n");
				else
					ft_putstr("Stop : modulo by zero\n");
			}
			else
			{
				ft_putnbr(g_opptab[count_i].opp_fct(nb_a, nb_b));
				ft_putchar('\n');
			}
		}
		count_i++;
	}
}

int		main(int argc, char **argv)
{
	int nb_a;
	int nb_b;

	if (argc == 4)
	{
		nb_a = ft_atoi(argv[1]);
		nb_b = ft_atoi(argv[3]);
		treatment(argv[2], nb_a, nb_b);
	}
	return (0);
}
