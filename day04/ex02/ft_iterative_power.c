/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 15:39:23 by lduval            #+#    #+#             */
/*   Updated: 2016/08/07 20:56:02 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int resultat;

	resultat = nb;
	if (power < 0)
		resultat = 0;
	else if (power > 0)
	{
		while (power > 1)
		{
			resultat *= nb;
			power--;
		}
	}
	else if (power == 0)
		resultat = 1;
	return (resultat);
}
