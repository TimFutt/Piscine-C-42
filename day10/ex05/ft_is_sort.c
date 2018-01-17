/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 10:19:29 by tifuret           #+#    #+#             */
/*   Updated: 2017/08/22 10:41:06 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		cro;
	int		dec;

	cro = -1;
	dec = -1;
	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) > 0)
			cro = 0;
	if (cro != 0)
		cro = 1;
	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) < 0)
			dec = 0;
	if (dec != 0)
		dec = 1;
	if (dec || cro)
		return (1);
	else
		return (0);
}
