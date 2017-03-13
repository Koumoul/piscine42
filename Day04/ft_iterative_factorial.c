/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 20:17:04 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/13 19:27:12 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	i = 2;
	fact = 1;
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}

int  main ()
{
   	int a;
	int b;

	a = 10;
	b = ft_iterative_factorial(a);
	printf("%d\n", b);
	return (0);
}
