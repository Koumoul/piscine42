/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 09:54:23 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/13 10:20:38 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_iterative_power(int nb, int power)
{
	int i;
	int pow;
	
	i = 1;
	pow = nb;	
	while (i < power)
	{
		pow = pow * nb;
		i++;
	}
	return (pow);
}

int		main()
{
	int a;

	a = ft_iterative_power(2, 8);
	printf("%d\n", a);
	return (0);
}
