/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 22:04:45 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/10 15:45:47 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
		write(1, &c, 1);
		return(0);
}

void	ft_is_negative(int n)
{
	if(n < 0)
		{
			ft_putchar('N');
		}
	else
		{
			ft_putchar('P');
		}
}

int		main()
{
	ft_is_negative(2);
	return(0);
}
