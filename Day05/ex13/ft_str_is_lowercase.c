/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 16:05:39 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 16:58:15 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
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



int		ft_str_is_lowercase(char *str)
{
	int count;
	int len_str;

	count = 0;
	len_str = ft_strlen(str);
	while (str[count] > 96  && str[count] < 123)
	{
		count++;
	}
	if (count == len_str)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

int		main()
{
	char str[] = "kfbskfbiAskbazvksfb";

	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
