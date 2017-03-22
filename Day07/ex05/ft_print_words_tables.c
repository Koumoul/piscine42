/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 16:40:34 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/22 19:58:04 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	**ft_split_whitespaces(char *str);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_len(char **str)
{
	int i;

	i = 0;
	while (str[i][0] != 0)
	{
		i++;
	}
	return (i);
}

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		nb;
	
	i = 0;
	nb = ft_len(tab);
	while (i < nb)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int a;
	char **str;


	a = argc;
	str = ft_split_whitespaces(argv[1]);
	ft_print_words_tables(str);
	return (0);
}
