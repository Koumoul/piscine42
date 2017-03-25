/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrigal- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 19:10:23 by mrigal-           #+#    #+#             */
/*   Updated: 2017/03/12 23:10:03 by mrigal-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putline(int x, char left, char middle, char right)
{
	int a;

	ft_putchar(left);
	a = 0;
	while (a < x - 2)
	{
		ft_putchar(middle);
		a++;
	}
	if (x > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int a;

	if (x <= 0 || y <= 0)
		return ;
	ft_putline(x, '/', '*', '\\');
	a = 0;
	while (a < y - 2)
	{
		ft_putline(x, '*', ' ', '*');
		a++;
	}
	if (y > 1)
		ft_putline(x, '\\', '*', '/');
}
