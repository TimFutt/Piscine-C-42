/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 19:33:28 by tifuret           #+#    #+#             */
/*   Updated: 2017/08/19 10:39:21 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strcpy(t_stock_par *tab, char *str, int i)
{
	int		j;

	j = 0;
	while (str[j] != '\0')
		j++;
	tab[i].copy = (char*)malloc(sizeof(char) * j);
	j = -1;
	while (str[++j] != '\0')
	{
		tab[i].copy[j] = str[j];
	}
	tab[i].copy[j] = '\0';
	return (tab[i].copy);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*tab;

	tab = malloc(sizeof(t_stock_par) * ac + 1);
	i = 0;
	while (i < ac)
	{
		tab[i].copy = ft_strcpy(tab, av[i], i);
		tab[i].size_param = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
