/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 21:01:11 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/16 21:30:11 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
		write(1, &c, 1);
			return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
	ft_putchar(*str);
	str++;
	}
}


int		main(int argc, char **argv)
{
	ft_putstr(argv[0]);
	ft_putchar('\n');
}
