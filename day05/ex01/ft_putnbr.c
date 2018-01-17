/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 10:07:42 by tifuret           #+#    #+#             */
/*   Updated: 2017/08/07 16:57:07 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_str(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	nb1;
	unsigned int	nb2;

	if (nb == -2147483648)
	{
		ft_str("-2147483648");
		return ;
	}
	if ((nb < 0) && (nb != -2147483648))
	{
		nb = -nb;
		ft_putchar('-');
	}
	nb1 = nb / 10;
	nb2 = nb % 10;
	if (nb1 > 0)
		ft_putnbr(nb1);
	ft_putchar(nb2 + 48);
}
