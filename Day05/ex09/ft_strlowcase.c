/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 14:52:49 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 15:02:31 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int i;
	char c;

	i = 0;
	c = 'x';
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91 )
		{
			c = str[i];
			str[i] = c + 32;
		}
		i++;
	}
	return (str);
}

int		main()
{
	char tab[] = "ABCDEFGTHGYJJUGZ";
	printf("%s", ft_strlowercase(tab));
	return (0);
}


