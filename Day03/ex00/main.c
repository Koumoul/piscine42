/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 12:13:43 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/10 13:16:07 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putnbr(int c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_ft(int *nbr);

int		main()
{
	int a;

	a=2;
	ft_ft(&a);
	printf("%d\n",a);
}
