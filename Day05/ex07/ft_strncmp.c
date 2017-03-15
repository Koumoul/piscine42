/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 23:15:24 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 20:50:47 by nbourhis         ###   ########.fr       */
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

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (ft_strlen(s1) != ft_strlen(s2))
	{
		return (0);
	}
	while (s2[i] == s1[i] && s2[i] != '\0' && i < n -1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
	
}

int		main()
{
	char *s1 = "aaa";
	char *s2 = "Baa";
	unsigned int n;

	n = 2;
	printf("ft_str = %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp = %d\n",	strncmp(s1, s2, n));
	return (0);
}



