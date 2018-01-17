/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 10:33:30 by tifuret           #+#    #+#             */
/*   Updated: 2017/08/15 16:03:12 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size_off(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*assign(int ac, char **av, char *str, int size_of)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 0;
	k = 0;
	str = (char*)malloc(sizeof(char) * size_of);
	while (i < ac)
	{
		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		j = 0;
		i++;
	}
	str[k - 1] = '\0';
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		p;

	i = 1;
	p = 0;
	str = 0;
	while (i < argc)
	{
		p = p + (size_off(argv[i]));
		i++;
	}
	str = assign(argc, argv, str, p);
	return (str);
}
