/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 12:34:33 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/09 16:55:01 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void				ft_print(char number1, char number2, char number3)
{  
    if (number1 == '0' && number2 == '1' && number3 == '3')

	{
		ft_putchar(number1);
		ft_putchar(number2);
		ft_putchar('2');
		ft_putchar(',');
		ft_putchar(' ');
	}

	ft_putchar(number1);
	ft_putchar(number2);
	ft_putchar(number3);
	if (!(number1 == '7' && number2 == '8' && number3 == '9'))

	{
		ft_putchar(',');
		ft_putchar(' ');
	}

}

void				ft_comb(void)
{
	char number1;
	char number2;
	char number3;

	number1 = '0';
	number2 = '1';
	number3 = '2';

	while (number1 <= '7')
	{
		while (number2 <= '8')
		{
			while (number3 < '9')
			{
				number3++;
				ft_print(number1, number2, number3);
			}
			number3 = number2 + 1;
			number2++;
		}
		number2 = number1 + 1;
		number1++;
	}
}
int				main()
{
	ft_comb();
	return(0);
}
