/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 15:04:18 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 16:15:38 by nbourhis         ###   ########.fr       */
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
		if (i == 0 && (str[i] > 96 && str[i] < 123))
		{
			str[i] = str[i] - 32;
		}
		if (str[i] == ' '  str  && (str[i + 1] > 96 && str[i + 1] < 123))
		{
			str[i + 1] = str[i + 1] - 32;
		}
		if (str[i] == '+'  str  && (str[i + 1] > 96 && str[i + 1] < 123))
		{
			str[i + 1] = str[i + 1] - 32;
		}
		if (str[i] == '-'  str  && (str[i + 1] > 96 && str[i + 1] < 123))
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}

int		 main()
{
	char tab[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un ";
	printf("%s", ft_strcapitalize(tab));
}
