/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 10:26:23 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/21 17:42:58 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	char *str;
	char len_src;
	int i;

	i = 0;
	len_src = ft_strlen(src);
	str = (char*)malloc(sizeof(char) * (len_src + 1));
	while (i < len_src)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

//-------------------------------------------
#include <unistd.h>
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

#include <stdio.h>
int		main()
{
	char src[] = "hello";
	char *str;

	str = ft_strdup(src);
	ft_putstr(str);
	return (0);
}



