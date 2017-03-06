/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 11:20:59 by lduval            #+#    #+#             */
/*   Updated: 2016/08/12 16:42:43 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>

typedef enum e_ft_bool ft_bool;
typedef struct  s_door t_door;
void    open_door(t_door *door);
ft_bool is_door_close(t_door *door);
ft_bool is_door_open(t_door *door);
void  	close_door(t_door *door);
void 	ft_putstr(char *str);

enum e_states
{
	CLOSE,
	OPEN
};

enum e_ft_bool
{
	FALSE,
	TRUE
};

typedef struct		s_door
{
	enum e_states	state;
}					t_door;

#endif
