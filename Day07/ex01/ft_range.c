/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 10:57:32 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/21 19:03:53 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab_int;
	if (max > min)
	{
		tab_int = (int*)malloc(sizeof(int) * (max - min));
		i = 0;
		while (i < (max - min))
		{
			tab_int[i] = min + i;
			i++;
		}
	return (tab_int);
	}
	else
	{
		tab_int = NULL;
		return (tab_int);
	}
}

#include <stdio.h>
int		main()
{
	int min;
	int max;
	int i;

	i = 0;
	min = 2;
	max = 6;

	while (i < (max - min))
	{
		printf("%d", ft_range(min, max)[i]);
		i++;
	}
	return (0);
}
