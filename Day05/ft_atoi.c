/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 20:41:16 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/16 14:00:44 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_put_char_in_nbr(char *str)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
			nbr = nbr * 10 + str[i] - 48;
			str++;
	}
	return (nbr);
}
	
int		ft_atoi(char *str)
{
	while ( str[0] == ' ' || str[0] == '\n' || str[0] == '\t' ||
		 str[0] == '\v' || str[0] == '\f')
	{
		str++;
	}
	if (str[0] == '+')
	{
		str++;
	}
	else if (str[0] == '-' &&  str[1] >= '0' && str[1] <= '9' )
	{
		str++;
		return (-ft_put_char_in_nbr(str));
	}
	return(ft_put_char_in_nbr(str));
}

int		main()
{
	char *str = "12356789";
	int a;

	a = ft_atoi(str);
	printf("%d", a);
	return (0);
}
