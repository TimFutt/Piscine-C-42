/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 23:26:15 by tifuret           #+#    #+#             */
/*   Updated: 2017/08/03 18:18:59 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_full_putchar(char a, char b, char c, char d)
{
	if (a == 57 && b == 56 && c == 57 && d == 57)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_using(char i, char j, char k, char l)
{
	if (i < k)
	{
		ft_full_putchar(i, j, k, l);
	}
	else
	{
		if (i == k && j < l)
			ft_full_putchar(i, j, k, l);
	}
}

void	ft_prog(char i, char j, char k, char l)
{
	while (i <= 57)
	{
		while (j <= 57)
		{
			while (k <= 57)
			{
				while (l <= 57)
				{
					ft_using(i, j, k, l);
					l++;
				}
				k++;
				l = 48;
			}
			j++;
			k = 48;
		}
		i++;
		j = 48;
	}
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	k;
	char	l;

	i = 48;
	j = 48;
	k = 48;
	l = 48;
	ft_prog(i, j, k, l);
}
