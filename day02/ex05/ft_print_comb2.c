/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 23:16:49 by lduval            #+#    #+#             */
/*   Updated: 2016/08/06 17:41:18 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = -1;
	while ((b += 1) <= 98)
	{
		while ((a += 1) <= 99)
		{
			if (a != b)
			{
				ft_putchar((b / 10) + 48);
				ft_putchar(b % 10 + 48);
				ft_putchar(' ');
				ft_putchar((a / 10) + 48);
				ft_putchar(a % 10 + 48);
				if (b < 98)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
		a = b;
	}
}
