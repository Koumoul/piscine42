/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 20:50:49 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/12 22:34:13 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		return ( ft_recursive_power(nb, power - 1) * nb);
	}
	else
	{
		return (1);
	}
}

int		 main()
{
	int a;

	a = ft_recursive_power(2, 8);
	printf("%d\n", a);
	return (0);
}
