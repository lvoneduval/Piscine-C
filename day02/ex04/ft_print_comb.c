/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 22:23:17 by lduval            #+#    #+#             */
/*   Updated: 2016/08/06 20:49:59 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int number[3];

	number[0] = -1;
	number[1] = 0;
	number[2] = 1;
	while ((number[0] += 1) <= 7)
	{
		while ((number[1] += 1) <= 8)
		{
			while ((number[2] += 1) <= 9)
			{
				ft_putchar(number[0] + 48);
				ft_putchar(number[1] + 48);
				ft_putchar(number[2] + 48);
				if (((number[0] * 100) + (number[1] * 10) + number[2]) < 789)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			number[2] = number[1] + 1;
		}
		number[1] = number[0];
	}
}
