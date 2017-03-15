/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 15:04:18 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 15:27:30 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && (str[i + 1] > 96 && str[i + 1] < 123))
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;;
	}
	return (str);
}

int		 main()
{
	char tab[] = "on jour de MOIT Jamai ";
	printf("%s", ft_strcapitalize(tab));
}
