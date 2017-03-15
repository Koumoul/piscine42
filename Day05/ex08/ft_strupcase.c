/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 10:52:41 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 15:26:26 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;
	char c;

	i = 0;
	c = 'x';
	while (str[i] != '\0')
	{
		if (str[i] > 96  && str[i] < 123)
		{
			c = str[i];
			str[i] = c - 32;
		}
		i++;
	}
	return (str);
}

int		main()
{
	char tab[] = "Hello";
	printf("%s", ft_strupcase(tab));
}
