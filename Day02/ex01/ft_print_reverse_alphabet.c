/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 15:46:30 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/09 16:38:49 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar();

void	ft_print_reverse_alphabet(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		char c;

		c = i;
		ft_putchar(c);
		i = i - 1;
	}
}