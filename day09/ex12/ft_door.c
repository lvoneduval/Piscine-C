/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 11:37:17 by lduval            #+#    #+#             */
/*   Updated: 2016/08/12 16:33:27 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &(str[i]), 1);
		i++;
	}
}

void	close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
}

ft_bool	is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state == OPEN) ? TRUE : FALSE;
}

ft_bool	is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	return (door->state == CLOSE) ? TRUE : FALSE;
}

void	open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
}
