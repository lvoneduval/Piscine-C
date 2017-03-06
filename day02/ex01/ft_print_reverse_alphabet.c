/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 18:37:37 by lduval            #+#    #+#             */
/*   Updated: 2016/08/05 11:06:51 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char a;
	char b;

	a = 'z';
	b = 'a';
	while (a >= b)
	{
		ft_putchar(a);
		a--;
	}
}
