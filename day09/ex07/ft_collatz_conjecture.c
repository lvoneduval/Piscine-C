/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 02:02:10 by lduval            #+#    #+#             */
/*   Updated: 2016/08/12 16:09:09 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (1);
	else if ((base % 2) == 0)
		return (ft_collatz_conjecture(base / 2));
	else
		return (ft_collatz_conjecture((3 * base) + 1));
}
