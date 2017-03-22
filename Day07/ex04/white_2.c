/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   white_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 11:15:41 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/22 13:22:36 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_word_size(char *str)
{
	int count;
	int i;
	
	count = 0;
	i = 0;
	while (str[i] != ' ' && str[i] != 9 && str[i] != '\n' &&  str[i] != '\0' )
	{
		count++;
		i++;
	}
	return (count);
}

int ft_number_of_word(char *str)
{
	int i;
	int count;
	int w_size;

	i = 0;
	count = 0;
	if (*str != ' ' && *str != 9 && *str != '\n')
		count ++;
	while (*str != '\0')
	{
		if ((*str == ' ' || *str == '\n' || *str  == 9) 
				&& (*(str + 1) != ' ' || *(str + 1) != '\n' || *(str + 1) != 9))
		{
			count++;
			w_size = ft_word_size(str + 1);
			printf("size = %d\n",w_size);
		}
		str++;
	}
	return (count);
}

int 	main()
{
	char str[] = " helloe world lregerl g g ";
	int nb;

	nb = ft_number_of_word(str);	
	printf(" nb = %d\n", nb);
}

