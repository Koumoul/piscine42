/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 09:04:12 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/11 14:35:10 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_up(int x)
{
	int l;
	int h;

	l = 0;
	h = 0;
	ft_putchar('/');
	while (l < x - 2)
	{
		ft_putchar('*');
		l++;
	}
	if (x > 1)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	ft_down(int x, int y)
{
	int l;

	l = 0;
	if (y > 1)
	{
		ft_putchar('\\');
		while (l < x - 2)
		{
			ft_putchar('*');
			l++;
		}
		ft_putchar('/');
	}
}

void	ft_space(int x)
{
	int l;

	l = 0;
	while (l < x - 2)
	{
		ft_putchar(' ');
		l++;
	}
}

void	rush00(int x, int y)
{
	int h;

	if (!(x == 0 && y == 0))
	{
		h = 0;
		ft_up(x);
		while (h < (y - 2))
		{
			ft_putchar('*');
			if (x > 1)
			{
				ft_space(x);
				ft_putchar('*');
			}
			ft_putchar('\n');
			h++;
		}
		ft_down(x, y);
	}
	else
	{
		ft_putchar('\n');
	}
}
