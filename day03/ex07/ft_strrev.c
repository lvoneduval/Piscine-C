/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 12:45:14 by lduval            #+#    #+#             */
/*   Updated: 2016/08/06 14:25:34 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char a;

	i = 0;
	j = 0;
	while (*(str + i) != '\0')
		i++;
	i = i - 1;
	while (j < i)
	{
		a = *(str + i);
		*(str + i) = *(str + j);
		*(str + j) = a;
		j++;
		i--;
	}
	return (str);
}
