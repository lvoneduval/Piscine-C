/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 02:28:04 by lduval            #+#    #+#             */
/*   Updated: 2016/08/19 06:01:15 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPP_H
# define OPP_H

int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);

typedef struct	s_opp
{
	char		*opp_char;
	int			(*opp_fct)(int, int);
}				t_opp;

#endif
