/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 16:05:39 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 17:01:22 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}



int		ft_str_is_uppercase(char *str)
{
	int count;
	int len_str;

	count = 0;
	len_str = ft_strlen(str);
	while (str[count] > 64  && str[count] < 91)
	{
		count++;
	}
	if (count == len_str)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

int		main()
{
	char str[] = "AFRRFGRFGRAZ";

	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
