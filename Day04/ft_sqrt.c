/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 08:40:42 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/13 10:32:09 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	float x;
	float y;
	int x_int;

	x = nb;
	y = 1;
	while ((x - y) > 1)
	{
	x = (x + y)/2;
	y = nb/x;
	}
	x_int = (int) x;
	if (x_int * x_int == nb)
	{
		return ((int) x);
	}
	else
	{
		return (0);
	}
}

int		main()
{
	int b;

	b = ft_sqrt(6084);
	printf("%d\n",b);
	return (0);
}

