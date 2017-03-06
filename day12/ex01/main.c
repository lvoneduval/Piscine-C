/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 01:41:40 by lduval            #+#    #+#             */
/*   Updated: 2016/08/23 02:07:16 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	putstr2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(2, str + i, 1);
		i++;
	}
}

void	puterror(char *str)
{
	putstr2("cat: ");
	putstr2(str);
	putstr2(": No such file or directory\n");
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf;
	int		i;

	i = 1;
	while (i < argc)
	{
		if (argc < 2 || argv[1][0] == '-')
			fd = 0;
		else
			fd = open(argv[i], O_RDONLY);
		if (fd >= 0)
		{
			while (read(fd, &buf, 1) > 0)
				write(1, &buf, 1);
		}
		else
			puterror(argv[i]);
		close(fd);
		i++;
	}
	return (0);
}
