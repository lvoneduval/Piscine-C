/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 15:08:23 by lduval            #+#    #+#             */
/*   Updated: 2016/08/08 00:37:25 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int factoriel;

	factoriel = 1;
	if (nb < 0)
		factoriel = 0;
	while (nb > 1)
	{
		factoriel *= nb;
		nb--;
	}
	return (factoriel);
}
