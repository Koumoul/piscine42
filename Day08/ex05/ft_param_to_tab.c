/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 21:25:09 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/23 09:51:45 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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

char	*ft_strcopy(char *dest, char src)
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
	t_stock_par **tab_struct;
	char *dest;
	int i;
	t_stock_par param;

	i = 0;
	tab_struct = (char*)malloc(sizeof(t_stock_par) * ac);
	while (i < ac)
	{
		param.size_param = ft_size(av[i]);
		param.str = af[i];
		dest = (char*)malloc(sizeof(char) * (paran.size_param + 1));
		param.copy = ft_strcopy(dest, av[i]);
		param.tab = ft_split_whitspaces(av[i]);
		tab_struct[i] = &param
	}
