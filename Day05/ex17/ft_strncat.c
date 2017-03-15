/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 17:24:20 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 21:05:11 by nbourhis         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int len_dest;

	len_dest = ft_strlen(dest);
	i = 0;
	while ((src[i] != '\0') && (i < nb))
		{
			dest[len_dest +i] = src[i];
			i++;
		}
	dest[len_dest + i] = '\0';
	return (dest);
}

int		main()
{
	char dest[20] = "hello";
	char src[] = " world";
	int nb;
	
	nb = 3;
	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}
