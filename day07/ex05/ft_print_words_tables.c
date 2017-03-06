/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 14:55:56 by lduval            #+#    #+#             */
/*   Updated: 2016/08/17 04:36:47 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int		counter;
	char	backspace;

	backspace = '\n';
	counter = 0;
	while (tab[counter] != 0)
	{
		ft_putstr(tab[counter]);
		counter++;
		ft_putchar(backspace);
	}
}
