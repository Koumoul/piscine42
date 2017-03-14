/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:47:28 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/14 21:29:13 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
		int i;

		i = 0;
		while (*str != '\0')
		{
			str++;
			i++;
		}
		return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int count;
	int len_to_find;

	len_to_find = ft_strlen(to_find);
	i = 0;
	while (str[i] != '\0')
	{
		if  (str[i] == to_find[0])
		{
			count = 0;
			j = 0;
			while (str[i + j] == to_find[j])
			{
				count++;
				j++;
			}
			if (count == len_to_find)
			{
				return (str + i);
			}
		}
		i++;
	}

	return NULL;
}

int		main()
{
	char str[] = "hello";
	char to_find[] = "ll";

	printf("%c", *ft_strstr(str, to_find));
	return (0);
}
