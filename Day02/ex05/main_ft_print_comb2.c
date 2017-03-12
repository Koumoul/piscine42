/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_print_comb2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 17:08:30 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/11 09:38:06 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print(char num1, char num2)
{
	char num3;
	char num4;
	
	num3 = num1;
	while ( num3 <= '9')
	{
		num4=num2 + 1;
		while ( num4 <= '9')
		{   
			ft_putchar(num1);
			ft_putchar(num2);
			ft_putchar(' ');
			ft_putchar(num3);
			ft_putchar(num4);
			if (!(num1 == '9' && num2 == '8' && num3 == '9' && num4 == '9'))
			{
			ft_putchar(',');
			ft_putchar(' ');
			}
			num4++;
		}
		num3++;
	}
}


void	ft_print_comb2(void)
{
	char num1;
	char num2;

	num1 = '0';
	while ( num1 <= '9')
	{
		num2  = '0';
		while ( num2 <= '8')
		{
			ft_print(num1, num2);
			num2++;
		}
		num1++;
	}
}

int		main()
{
	ft_print_comb2();
	return (0);
}
