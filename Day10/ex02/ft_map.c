/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 13:02:54 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/24 13:10:37 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int *ft_map(int *tab, int length, int(*f)(int));
{
	int i;
	int *ret;

	i = 0;
	ret = (int*)malloc(sizeof(int) * length);
	if (ret == NULL)
		return (0);
	while (i < length)
	{
		ret[i] = f(tab[i]);
	}
	return (ret);
}
