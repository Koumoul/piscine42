/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 21:41:19 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/12 09:16:51 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strlen(char *str)
{
	int i;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}


char	*ft_strrev(char *str)
{
	char tampon;
	char tab[ft_strlen(str) + 1];
	int len;

	len = ft_strlen(str);
	while(*str != '\0')
	{
		tampon = *str;
		tab[len] = tampon;
		len--;
		str++;
	}
	tab[len + 1] = '\0';
	return (tab);
}
