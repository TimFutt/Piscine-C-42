/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 18:48:10 by tifuret           #+#    #+#             */
/*   Updated: 2017/08/03 23:18:32 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_working(char i, char j, char k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (!(i == 55 && j == 56 && k == 57))
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 48;
	j = 49;
	k = 50;
	while (i <= 55)
	{
		while (j <= 56)
		{
			while (k <= 57)
			{
				if (i < j && j < k)
				{
					ft_working(i, j, k);
				}
				k++;
			}
			j++;
			k = 0;
		}
		i++;
		j = 0;
	}
}
