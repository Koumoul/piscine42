/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 20:41:16 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/13 22:11:16 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_strlen(char *str)
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

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);	
	}
	if (power > 0)
	{
		return ( ft_recursive_power(nb, power - 1) * nb);
	}
	else
	{
	return (1);
	}
}

int 	ft_atoi(char *str)
{
	char chif_char;
	int i;
	int nbr;
	int len;

	len  = ft_strlen(str);
	nbr = 0;
	i = 0;
	chif_char = 'x';
	while (chif_char != '\0')
	{
		chif_char = str[i];
		nbr = nbr + ft_recursive_power(10,(len - 1 - i)) * (chif_char - 48);
		i++;
	}

	return (nbr);
}

int		main()
{
	char *str = "123456789";
	int a;

	a = ft_atoi(str);
	printf("%d", a);
	return (0);
}
