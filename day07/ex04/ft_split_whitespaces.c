/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:00:04 by tifuret           #+#    #+#             */
/*   Updated: 2017/08/17 09:30:20 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_countwords(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			if (str[i] != '\0')
				i++;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		j++;
	}
	return (j);
}

char	*ft_fstr(char *str, int *j)
{
	int		start;
	int		i;
	int		end;
	char	*string;

	start = *j;
	i = start;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	end = i;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	*j = i;
	i = -1;
	if (!(string = (char*)malloc(end - start + 1)))
		return (NULL);
	while (i < end - start)
	{
		string[i] = str[start + i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	**ft_split_whitespaces(char *str)
{
	int		j;
	int		index;
	int		word;
	char	**tab;

	j = 0;
	index = 0;
	word = 0;
	if (str == NULL)
		return (0);
	word = ft_countwords(str);
	tab = (char**)malloc(sizeof(char*) * (word + 1));
	while (str[0] == ' ' || str[0] == '\n' || str[0] == '\t')
		str++;
	while (str[j] != '\0')
	{
		tab[index] = ft_fstr(str, &j);
		index++;
	}
	tab[index] = 0;
	return (tab);
}
