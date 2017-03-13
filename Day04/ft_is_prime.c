/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 10:48:27 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/13 11:47:28 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;
	int mod;

	i = 3;
	if (nb == 1 || nb == 2)
	{
		return (0);
	}
	if ( nb % 2 == 0)
	{
		return (0);
	}
	else
	{
	while(i < nb)
	{
		mod = nb % i;
		if( mod == 0)
		{
			return (0);
		}
		i = i + 2;
	}
	return (1);
	}
}

int		main()
{
	int prim;

	prim = ft_is_prime(49999);
	printf("%d\n", prim);
	return (0);
}

