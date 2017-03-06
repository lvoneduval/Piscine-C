/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 03:34:39 by lduval            #+#    #+#             */
/*   Updated: 2016/08/10 02:49:04 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int number_atoi;
	int is_neg;

	is_neg = 1;
	i = 0;
	number_atoi = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
				|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_neg = -1;
		i++;
	}
	while (str[i] && (str[i] <= '9') && (str[i] >= '0'))
	{
		number_atoi *= 10;
		number_atoi += (str[i] - 48);
		i++;
	}
	return (is_neg * number_atoi);
}
