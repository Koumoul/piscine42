/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 19:10:23 by mrigal-           #+#    #+#             */
/*   Updated: 2017/03/25 22:58:07 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		ft_putchar(*str)
		str++;
	}
}


char	*ft_putline(int x, char left, char middle, char right)
{
	int a;
	char **ptr_tab;
	char *str;

	str = (char*)malloc(sizeof(char) * (x + 1));


	str[0] = left;
	a = 1;
	while (a < x - 1)
	{
		str[a](middle);
		a++;
	}
	if (x > 1)
		str[a](right);
		a++;
	str[a] ='\n';
	str[a + 1] = '\0'; 
	return (str);
}

char	**rush(int x, int y)
{
	int a;
	char **ptr_tab;

	ptr_tab = (char**)malloc(sizeof(char*) * (y + 1));

	if (x <= 0 || y <= 0)
		return ;
	ptr_tab[0] = ft_putline(x, 'o', '-', 'o');
	a = 1;
	while (a < y - 1)
	{
		ptr_tab[a] = ft_putline(x, '|', ' ', '|');
		a++;
	}
	if (y > 1)
		ptr_tab[a] = ft_putline(x, 'o', '-', 'o');
		a++;
	return (ptr_tab);
}

int		main()
{
	char **ptr;

	ptr = rush00(5, 5);
	while (i < 5)
	{
		ft_putstr(ptr[i])
	}


}



