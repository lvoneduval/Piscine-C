/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 05:55:30 by lduval            #+#    #+#             */
/*   Updated: 2016/08/19 05:55:35 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPP_H
# define FT_OPP_H

t_opp g_opptab[] =
{
	{"+", &ft_add},
	{"-", &ft_sub},
	{"*", &ft_mul},
	{"/", &ft_div},
	{"%", &ft_mod},
};
#endif
