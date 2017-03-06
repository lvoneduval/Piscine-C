/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 20:04:37 by lduval            #+#    #+#             */
/*   Updated: 2016/08/13 01:04:16 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int capit;

	capit = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
				(str[i] == '\v') || (str[i] == '\f')
				|| (str[i] == '\r') || (str[i] == '+') || (str[i] == '-'))
			capit = 0;
		else if (((str[i] >= 'a') && (str[i] <= 'z')) && (capit == 0))
			str[i] = str[i] - 32;
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			if (capit == 1)
				str[i] = str[i] + 32;
		}
		if ((((str[i] >= 'a') && (str[i] <= 'z')) && (capit == 0)) ||
				(((str[i] >= 'A') && (str[i] <= 'Z')) && (capit == 0))
				|| ((str[i] >= '0') && (str[i] <= '9')))
			capit = 1;
		i++;
	}
	return (str);
}
