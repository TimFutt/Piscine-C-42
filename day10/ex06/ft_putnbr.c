/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 11:57:09 by tifuret           #+#    #+#             */
/*   Updated: 2017/08/21 18:46:48 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putnbr(int nb)
{
	unsigned int	nb1;
	unsigned int	nb2;

	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
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
