/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 15:53:30 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/22 19:42:34 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_word_size(char *str)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i] != ' ' && str[i] != 9 && str[i] != '\n' && str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

int		ft_number_of_word(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (*str != ' ' && *str != 9 && *str != '\n')
		count ++;
	while (*str != '\0')
	{
		if ((*str == ' ' || *str == '\n' || *str == 9)
			&& (*(str + 1) != ' ' || *(str + 1) != '\n' ||
				*(str + 1) != 9 || *(str + 1) != '\0'))
		{
			count++;
		}
		str++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**temp;
	int		i;
	int		j;

	temp = (char**)malloc(sizeof(char*) * (ft_number_of_word(str) + 1));
	i = 1;
	j = 0;
	while (*str != '\0')
	{
		if (*str != ' ' && *str != 9 && *str != '\n' && *str != '\0')
		{
			temp[j] = (char*)malloc(sizeof(char) * (ft_word_size(str) + 1));
			i = 0;
			while (*str != ' ' && *str != 9 && *str != '\n' && *str != '\0')
			{
				temp[j][i] = *str;
				str++;
				i++;
			}
			temp[j][i] = '\0';
			j++;
		}
		while ((*str == ' ' || *str == 9 || *str == '\n') && *str != '\0')
		{
			str++;
		}
	}
	temp[j] = (char*)malloc(sizeof(char) * 1);
	temp[j][0] = 0;
	return (temp);
}	
