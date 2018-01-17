/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 10:09:10 by tifuret           #+#    #+#             */
/*   Updated: 2017/08/21 18:46:04 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "header.h"

int				convert_char_operator(char operator)
{
	if (operator == '+')
		return (ADD);
	if (operator == '-')
		return (SUBSTRACT);
	if (operator == '*')
		return (MULTIPLIE);
	if (operator == '/')
		return (DIVIDE);
	if (operator == '%')
		return (MODULO);
	return (42);
}

int				main(int argc, char **argv)
{
	int			a;
	int			b;
	int			operator;
	void		(*function_tab[5]) (int, int);

	if (argc != 4)
		return (0);
	else
	{
		function_tab[0] = &ft_add;
		function_tab[1] = &ft_sub;
		function_tab[2] = &ft_multi;
		function_tab[3] = &ft_div;
		function_tab[4] = &ft_mod;
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
	}
	operator = convert_char_operator(argv[2][0]);
	if (operator != 42)
		function_tab[operator](a, b);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
