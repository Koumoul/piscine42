/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 21:58:25 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/16 22:51:21 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

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
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_sort_table(char *tab)
{
	int i;
	char c;

	i = 0;
	while (tab[i] != '\0')
	{
		if (tab[i] > tab[i + 1] && tab[i + 1] != '\0') 
		{
			c = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = c;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;
	char *str_sort;

	i = 1;
	while (i < argc)
	{
		 ft_sort_table(argv[i]);
		 ft_putstr(argv[i]);
		 ft_putchar('\n');
		 i++;
	}
}
