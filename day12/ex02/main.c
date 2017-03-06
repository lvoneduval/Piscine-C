/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 11:30:48 by lduval            #+#    #+#             */
/*   Updated: 2016/08/23 02:06:45 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <sys/stat.h>
#include <sys/time.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	print_name(char *name)
{
	ft_putstra("==> ", 1);
	ft_putstra(name, 1);
	ft_putstra(" <==\n", 1);
}

int		ft_str_is_numeric(char *str)
{
	int is_num;
	int i;

	i = 0;
	is_num = 1;
	while (str[i] && is_num)
	{
		if (((str[i] < 48) || (str[i] > 57))
				&& (str[i] != '+') && (str[i] != '-'))
			is_num = 0;
		i++;
	}
	if (is_num == 0)
	{
		ft_putstra("tail: illegal offset -- ", 2);
		ft_putstra(str, 2);
		ft_putstra("\n", 2);
	}
	return (is_num);
}

void	succed(int bolean, char **argv, int i, int fd)
{
	char	buf;
	int		begin;
	int		temp;
	int		head;

	temp = ft_atoi(argv[2]);
	begin = (temp >= 0) ? temp : -temp;
	temp = siof(argv[i]);
	if (bolean)
		print_name(argv[i]);
	head = 0;
	if (argv[2][0] == '+')
	{
		while (head < begin - 1)
			head += read(fd, &buf, 1);
	}
	else
	{
		while (head < (temp - begin))
			head += read(fd, &buf, 1);
	}
	while (read(fd, &buf, 1))
		write(1, &buf, 1);
}

void	failed(char *name)
{
	ft_putstra("tail: ", 2);
	ft_putstra(name, 2);
	ft_putstra(": No such file or directory\n", 2);
}

int		main(int argc, char **argv)
{
	int fd;
	int since;
	int i;
	int b_print_name;

	since = ft_atoi(argv[2]);
	i = 3;
	if (since != 0 && ft_str_is_numeric(argv[2]))
	{
		b_print_name = ((argc - 4) > 0) ? 1 : 0;
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd > 0)
				succed(b_print_name, argv, i, fd);
			else
				failed(argv[i]);
			close(fd);
			if (i + 1 < argc && fd >= 0 && argc > 4)
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
