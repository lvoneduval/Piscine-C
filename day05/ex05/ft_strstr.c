/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 12:28:58 by lduval            #+#    #+#             */
/*   Updated: 2016/08/16 16:11:36 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		count_i;
	int		count_k;
	char	*result;
	int		temp;

	count_i = 0;
	result = 0;
	if (to_find[0])
	{
		while (str[count_i])
		{
			count_k = 0;
			temp = count_i;
			while (str[count_i++] == to_find[count_k++])
			{
				if (to_find[count_k] == '\0')
					return (str + temp);
			}
			if (to_find[count_k] != str[count_k])
				count_i = (count_i - count_k) + 1;
		}
	}
	else if (to_find[0] == '\0')
		result = str;
	return (result);
}
