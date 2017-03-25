/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 12:57:57 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/24 13:01:11 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int lenght, void (*f)(int));
void	ft_putnbr(int nbr);
int		ft_ultimate_range(int **range, int min, int max);
void	ft_putchar(char c)
{
		write(1, &c, 1);
}

int		main()
{
	int *ptr[1];
	int i;
	int a;

	a = 3;
	i = 0;
	ft_ultimate_range(ptr, 2, 6);
	ft_foreach(*ptr,6-2,&ft_putnbr);
}
