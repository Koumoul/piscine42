/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 09:43:48 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/23 12:52:54 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_par.h"
struct s_stock_par *ft_param_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar(-nbr);
		ft_putnbr(nbr);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		ft_putchar(nbr + '0');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	i = 0;
	while (par[i].str[0] != '\0')
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		i++;
	}
}

int main(int argc, char **argv)
{
	t_stock_par *test;

	test = ft_param_to_tab(argc, argv);
	ft_show_tab(test);
	return (0);
}


