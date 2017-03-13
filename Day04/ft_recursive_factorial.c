/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 17:17:33 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/13 11:43:26 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	if (nb >  1)
	{
		return (nb * ft_iterative_factorial(nb - 1));
	}
	else
	{
		return (1);
	}

}

int		 main()
{
	int a;
	int b;

	a = 5;
	b = ft_iterative_factorial(a);
	printf("%d\n", b);	
}
