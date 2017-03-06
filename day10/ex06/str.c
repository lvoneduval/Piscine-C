/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 03:56:06 by lduval            #+#    #+#             */
/*   Updated: 2016/08/19 05:52:05 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
