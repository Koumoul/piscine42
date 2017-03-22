/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 10:57:32 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/21 22:07:32 by nbourhis         ###   ########.fr       */
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

int		main()
{
	int i;
	int *ptr1;
	int **ptr;
	int a;

	a = 42;
	ptr1 = &a;
	ptr = &ptr1;


	

	i = 0;
	while (i < (6-2))
	{
		ft_ultimate_range(ptr, 2, 6);
		printf("%d\n",ptr[0][i]);
		i++;
	}
	return (0);
}
