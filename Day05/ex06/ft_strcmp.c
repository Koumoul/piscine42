/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 23:15:24 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 12:57:09 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int count;
	int i;
	int add1;
	int add2;

	i = 0;
	while (s1[i] != '\0')
	{
		add1 = add1 + s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		add2 = add2 + s2[i];
		i++;
	}
	if (add1 > add2)
	{
		return (32);
	}
	if (add1 < add2)
	{
		return (-32);
	}
	else
	{
		return (0);
	}
}

int		main()
{
	char *s1 = "aaFR";
	char *s2 = "aFRE";

	printf("ft_str =  %d\n", ft_strcmp(s1, s2));
	printf("strcmp = %d\n",	strcmp(s1, s2));
 
	return (0);
}



