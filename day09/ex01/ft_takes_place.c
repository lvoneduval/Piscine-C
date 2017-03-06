/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 19:01:12 by lduval            #+#    #+#             */
/*   Updated: 2016/08/12 14:04:14 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int	x;
	int y;

	if (hour == 0 || hour == 12 || hour == 24)
		x = 12;
	else
		x = hour % 12;
	if (x == 12)
		y = 1;
	else
		y = x + 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	if (hour == 11)
		printf(" 11.00 A.M. AND 12.00 P.M.");
	else if (hour >= 12 && hour < 23)
		printf(" %d.00 P.M. AND %d.00 P.M.", x, y);
	else if (hour == 23)
		printf(" 11.00 P.M. AND 12.00 A.M.");
	else
		printf(" %d.00 A.M. AND %d.00 A.M.", x, y);
	printf("\n");
}
