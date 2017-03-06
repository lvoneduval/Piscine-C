/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 07:37:38 by lduval            #+#    #+#             */
/*   Updated: 2016/08/14 12:01:12 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	fr_strncpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 1;
	while ((str[i]) && (i < size))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (i);
}
