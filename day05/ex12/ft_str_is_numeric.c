/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 20:51:21 by lduval            #+#    #+#             */
/*   Updated: 2016/08/10 03:03:26 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int is_num;
	int i;

	i = 0;
	is_num = 1;
	while (str[i] && is_num)
	{
		if ((str[i] < 48) || (str[i] > 57))
			is_num = 0;
		i++;
	}
	return (is_num);
}