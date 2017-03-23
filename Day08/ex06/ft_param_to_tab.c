/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 21:25:09 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/23 12:54:09 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"
char	**ft_split_whitespaces(char *str);
void	ft_show_tab(struct s_stock_par *par);


int ft_size(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcopy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
 	t_stock_par *tab_struct;
	char *dest;
	int i;
	t_stock_par param;

	i = 0;
	tab_struct = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		param.size_param = ft_size(av[i]);
		param.str = av[i];
		dest = (char*)malloc(sizeof(char) * (param.size_param + 1));
		param.copy = ft_strcopy(dest, av[i]);
		param.tab = ft_split_whitespaces(av[i]);
		tab_struct[i] = param;
		i++;
	}
	tab_struct[i].str = (char*)malloc(sizeof(char));
	tab_struct[i].str[0] = '\0';

	return (tab_struct);
}
