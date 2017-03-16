/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 21:29:57 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/16 21:53:58 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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



void	*ft_strrev(char *str)
{
	int len;
	int i;
	char c;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		c = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = c;
		i++;
	}
	return (str);
}


int		main(int argc, char **argv)
{
	int i;
	char *str_rev;

	i = 1;
	while (i < argc)
	{
		 str_rev = ft_strrev(argv[i]);
		 ft_putstr(str_rev);
		 ft_putchar('\n');
		 i++;
	}
}








