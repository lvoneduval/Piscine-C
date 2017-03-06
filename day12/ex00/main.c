/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 00:40:36 by lduval            #+#    #+#             */
/*   Updated: 2016/08/22 01:58:02 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define BUF_SIZE 511

int		main(int argc, char **argv)
{
	int		fd;
	int		red;
	char	buf[BUF_SIZE + 1];

	fd = 0;
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while ((red = read(fd, buf, BUF_SIZE)))
			write(1, buf, red);
	}
	else
		write(2, "Too many arguments.\n", 20);
	close(fd);
	return (0);
}
