/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 10:16:54 by tifuret           #+#    #+#             */
/*   Updated: 2017/08/19 10:44:32 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		ft_size(char **str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int		ft_swap(char **str, char **str2)
{
	char	*tmp;

	tmp = *str;
	*str = *str2;
	*str2 = tmp;
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		y;
	int		size_tab;

	size_tab = ft_size(tab);
	i = ft_size(tab) - 1;
	y = i;
	while (size_tab > 0)
	{
		while (i > 0)
		{
			if (ft_strcmp(tab[i], tab[i - 1]) < 0)
				ft_swap(&tab[i], &tab[i - 1]);
			i--;
		}
		size_tab--;
		i = y;
	}
}
