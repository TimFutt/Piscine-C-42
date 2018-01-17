/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 15:20:32 by tifuret           #+#    #+#             */
/*   Updated: 2017/08/07 17:10:01 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		size(char *str, int i)
{
	while (str[i])
	{
		while (str[i] >= 'z' && str[i] <= 'a')
			i++;
		return (i);
	}
	return (i);
}

int		shall_capitalize(char *str, int i)
{
	if ((str[i - 1] > 0 && str[i - 1] <= 32) || i - 1 < 0 || str[i - 1] == '+'
			|| str[i - 1] == '-')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (shall_capitalize(str, i))
				str[i] = str[i] - 32;
			i = size(str, i);
		}
		i++;
	}
	return (str);
}
