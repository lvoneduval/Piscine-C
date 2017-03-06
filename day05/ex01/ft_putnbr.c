/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 09:33:15 by lduval            #+#    #+#             */
/*   Updated: 2016/08/10 03:06:19 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int nbr[3];

	nbr[1] = nb;
	nbr[0] = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar(50);
			nbr[1] = 147483648;
		}
		else
			nbr[1] = -nb;
	}
	nbr[2] = nbr[1];
	while ((nbr[2] /= 10) > 0)
		nbr[0] = nbr[0] * 10;
	nbr[2] = nbr[1];
	while (nbr[0] > 0)
	{
		ft_putchar((nbr[2] / nbr[0]) + 48);
		nbr[2] %= nbr[0];
		nbr[0] /= 10;
	}
}