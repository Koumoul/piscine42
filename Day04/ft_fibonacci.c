/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 22:38:45 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/12 23:11:21 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	if (index  < 0)
	{
		return (-1);
	}
	else
	{
		if (index == 0)
		{
			return (0);
		}
		if (index == 1)
		{
			return (1);
		}
		if (index > 1)
		{
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
		}
	}
}

int		main()
{
	int a;

	a = ft_fibonacci(24);
	printf("%d\n", a);
	return (0);
}
