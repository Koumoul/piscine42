/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:47:28 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 16:47:33 by nbourhis         ###   ########.fr       */
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
	int len_str;

	len_to_find = ft_strlen(to_find);
	len_str = ft_strlen(str);
	i = 0;
	while (i <= len_str - len_to_find)
	{
		if  ((str[i] == to_find[0]) && (str[i] != '\0'))
		{
			count = 0;
			j = 0;
			while ((str[i + j] == to_find[j]) && (to_find[j] != '\0'))
			{
				count++;
				j++;
				printf("%d\n", count);
			}
			if (count == len_to_find)
			{
				return (str + i);
			}
		}
		i++;
	}

	return (NULL);
}

int		main()
{
	char str[] = "hello";
	char to_find[] = "lo";

	printf("%c", *ft_strstr(str, to_find));
}
