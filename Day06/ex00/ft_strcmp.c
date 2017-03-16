/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 23:15:24 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 20:42:10 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (ft_strlen(s1) != ft_strlen(s2))
	{
		return (0);
	}
	while (s2[i] == s1[i] && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
	
}

int		main()
{
	char *s1 = "aBaaa";
	char *s2 = "aaaaa";

	printf("ft_str =  %d\n", ft_strcmp(s1, s2));
	printf("strcmp = %d\n",	strcmp(s1, s2));
	return (0);
}



