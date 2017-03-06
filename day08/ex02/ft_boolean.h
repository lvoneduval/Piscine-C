/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 15:35:52 by lduval            #+#    #+#             */
/*   Updated: 2016/08/17 23:33:41 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

# define EVEN(x) 		(x % 2) == 0
# define TRUE			1
# define FALSE			0
# define EVEN_MSG 		"I have an even number of arguments.\n"
# define ODD_MSG 		"I have an odd number of arguments.\n"
# define SUCCESS 		1

typedef int	t_bool;

#endif
