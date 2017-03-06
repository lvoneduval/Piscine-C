/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 08:09:24 by lduval            #+#    #+#             */
/*   Updated: 2016/08/13 21:39:20 by lduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

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

void	ft_puttab(int argco, char **argvo, int *tab)
{
	int i;

	i = 0;
	while (i < argco)
	{
		ft_putstr(argvo[tab[i]]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int a[argc];
	int b;

	i = -1;
	while (i++ < argc)
		a[i] = i;
	i = 0;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[a[i]], argv[a[i + 1]]) > 0)
		{
			b = a[i];
			a[i] = a[i + 1];
			a[i + 1] = b;
			i = 0;
		}
		i++;
	}
	ft_puttab(argc, argv, a);
	return (0);
}
