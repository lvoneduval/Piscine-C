/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 10:46:21 by lduval            #+#    #+#             */
/*   Updated: 2016/08/21 12:04:55 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstra(char *str, int can)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(can, str + i, 1);
		i++;
	}
}

int		ft_atoi(char *str)
{
	int	i;
	int	negativ;
	int	number;

	i = 0;
	negativ = 0;
	number = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		negativ = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++;
	}
	if (negativ == 1)
		return (-number);
	else
		return (number);
}

int		siof(char *name)
{
	int		fd_temp;
	int		size;
	char	buf;

	size = 0;
	fd_temp = open(name, O_RDONLY);
	while (read(fd_temp, &buf, 1))
		size++;
	close(fd_temp);
	return (size);
}
