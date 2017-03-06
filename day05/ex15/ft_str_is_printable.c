/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 20:51:21 by lduval            #+#    #+#             */
/*   Updated: 2016/08/09 17:25:22 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int is_printable;
	int i;

	i = 0;
	is_printable = 1;
	while (str[i] && is_printable)
	{
		if ((str[i] < 33) || (str[i] > 126))
			is_printable = 0;
		i++;
	}
	return (is_printable);
}
