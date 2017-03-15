/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 17:24:20 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 18:18:23 by nbourhis         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int len_dest;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
		{
			dest[len_dest +i] = src[i];
			i++;
		}
	return (dest);
}

int		main()
{
	char dest[20] = "hello";
	char src[] = " world";
	
	printf("%s", ft_strcat(dest, src));
	return (0);
}
