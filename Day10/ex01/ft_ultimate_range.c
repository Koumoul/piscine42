/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 10:57:32 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/24 13:00:57 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab_int;
	int i;

	i = 0;
	if (max > min)
	{
		tab_int = (int*)malloc(sizeof(int) * (max - min));
		while (i < max - min)
		{
			tab_int[i] = min + i;
			i++;
		}
		*range = tab_int;
	}
	else
	{
		*range = NULL;
	}
	return (max - min);
}
