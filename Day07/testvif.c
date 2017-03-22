/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testvif.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 09:43:58 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/17 11:25:25 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#define LEN		42000000
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main()
{
	int i;
	char *str;

	str = (char*)malloc(sizeof(char) * (LEN + 1));
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	free(str);
	while (1)
	{
		;
	}
	return (0);
}
