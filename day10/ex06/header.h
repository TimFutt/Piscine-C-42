/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifuret <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 11:54:31 by tifuret           #+#    #+#             */
/*   Updated: 2017/08/21 18:47:09 by tifuret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define ADD 0
# define SUBSTRACT 1
# define MULTIPLIE 2
# define DIVIDE 3
# define MODULO 4

# include <unistd.h>

void		ft_add(int a, int b);
void		ft_sub(int a, int b);
void		ft_multi(int a, int b);
void		ft_div(int a, int b);
void		ft_mod(int a, int b);
int			ft_atoi(char *str);
void		ft_putnbr(int nb);
void		ft_putstr(char *str);
void		ft_putchar(char c);

#endif
