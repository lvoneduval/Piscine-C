/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 22:52:29 by lduval            #+#    #+#             */
/*   Updated: 2016/08/12 16:03:01 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_putuppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] -= 65;
			str[i] = ((str[i] + 42) % 26);
			str[i] += 65;
		}
		i++;
	}
	return (str);
}

char	*ft_putlowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 97;
			str[i] = ((str[i] + 42) % 26);
			str[i] += 97;
		}
		i++;
	}
	return (str);
}

char	*ft_rot42(char *str)
{
	ft_putlowercase(str);
	ft_putuppercase(str);
	return (str);
}
