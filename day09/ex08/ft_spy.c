/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 02:15:48 by lduval            #+#    #+#             */
/*   Updated: 2016/08/12 16:15:58 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > 96) && (str[i] < 123))
			str[i] -= 32;
		i++;
	}
	return (str);
}

int		test_str(char *str, int j)
{
	int		i;
	int		x;
	char	*word[3];

	word[0] = "PRESIDENT";
	word[1] = "ATTACK";
	word[2] = "POWERS";
	i = 0;
	x = 0;
	if (j == 9)
	{
		while ((i - 1) < 9 && (str[i] == word[0][i]))
			i++;
	}
	if (j == 6)
	{
		while ((i < 6) && (str[i] == word[1][i]))
			i++;
		while ((x < 6) && (str[x] == word[2][x]))
			x++;
	}
	return (((i == j) || (j == x)) && (j != 0)) ? 1 : 0;
}

int		test_ok(char *str)
{
	int		i;
	int		x;
	char	copy[50];

	i = 0;
	x = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while (str[i] && (((str[i] >= 65) &&
		(str[i] <= 90)) || ((str[i] >= 97) && (str[i] <= 122))))
	{
		copy[x] = str[i];
		x++;
		i++;
	}
	copy[x] = '\0';
	return (test_str(ft_strupcase(copy), x));
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int do_alert;

	i = 1;
	j = 0;
	while ((i < argc) && (do_alert == 0))
	{
		while (argv[i][j])
			j++;
		do_alert = test_ok(argv[i]);
		i++;
	}
	if (do_alert == 1)
		write(1, "Alert!!!\n", 9);
	return (0);
}
