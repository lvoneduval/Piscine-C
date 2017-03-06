/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 14:14:10 by lduval            #+#    #+#             */
/*   Updated: 2016/08/12 16:48:29 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int				count(int value)
{
	int counter;
	int i;

	i = 0;
	counter = 0;
	while (value != 0)
	{
		while (ft_recursive_power(2, i) <= value)
			i++;
		value -= ft_recursive_power(2, i - 1);
		counter += 1;
		i = 0;
	}
	return (counter);
}

unsigned int	ft_active_bits(int value)
{
	int i;
	int result;

	i = 0;
	if (value >= 0)
		result = count(value);
	else
	{
		result = count(-(value + 1));
	}
	return (value >= 0) ? result : 32 - result;
}
