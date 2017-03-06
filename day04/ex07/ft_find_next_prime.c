/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 12:44:30 by lduval            #+#    #+#             */
/*   Updated: 2016/08/08 12:12:32 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int est_premier;
	int i;

	est_premier = 1;
	if (nb == 2)
		est_premier = 1;
	else if (((nb % 2) == 0) || (nb <= 1))
		est_premier = 0;
	i = 3;
	while (i < (nb / 3) && (est_premier == 1))
	{
		if ((nb % i) == 0)
			est_premier = 0;
		i += 2;
	}
	return (est_premier);
}

int	ft_find_next_prime(int nb)
{
	if ((nb % 2) == 0)
		nb++;
	while (ft_is_prime(nb) == 0)
		nb += 2;
	return (nb);
}
