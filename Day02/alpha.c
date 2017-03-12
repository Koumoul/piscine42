/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 18:44:19 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/08 22:17:52 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_putchar();
void	ft_print_alphabet(void)

{
	int i;
	i = 97;

	while(i <= 122)
	{
		char c;
		c = i;
		ft_putchar(c);
		i++;
	}
}

int		main()
{
	void	ft_print_alphabet(void);
}
