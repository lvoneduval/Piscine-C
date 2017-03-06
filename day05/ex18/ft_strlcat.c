/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 00:29:01 by lduval            #+#    #+#             */
/*   Updated: 2016/08/10 02:40:38 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i + j < size)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
