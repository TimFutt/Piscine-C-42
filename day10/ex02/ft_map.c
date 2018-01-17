/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 14:44:45 by tifuret           #+#    #+#             */
/*   Updated: 2017/08/19 14:09:30 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*tab2;

	i = 0;
	tab2 = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		tab2[i] = f(tab[i]);
		i++;
	}
	return (tab2);
}
