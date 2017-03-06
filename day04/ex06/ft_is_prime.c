/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 20:20:26 by lduval            #+#    #+#             */
/*   Updated: 2016/08/08 12:08:18 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int est_premier;

	est_premier = 1;
	if (nb == 2)
		est_premier = 1;
	else if (((nb % 2) == 0) || nb <= 1)
		est_premier = 0;
	i = 3;
	while ((i * i < nb) && (est_premier == 1))
	{
		if ((nb % i) == 0)
			est_premier = 0;
		i += 2;
	}
	return (est_premier);
}
