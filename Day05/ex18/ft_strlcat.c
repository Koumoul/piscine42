/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 17:24:20 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 23:06:08 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

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

unsigned int	ft_strlcat(char *dest, char *src,unsigned int nb)
{
	unsigned int i;
	unsigned int len_dest;
	unsigned int len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dest + len_src < nb)
	{
		while ((src[i] != '\0'))
		{
			dest[len_dest +i] = src[i];
			i++;
		}
	dest[len_dest + i] = '\0';

	return (len_dest + len_src);
	}
	else
	{
		return (nb);
	}
}

int		main()
{
	char dest[30] = "1234567891";
	char src[] = "12345";
	unsigned int nb;
	
	nb = 14;
	printf("ft =  %u\n", ft_strlcat(dest, src, nb));
	printf("cat = %lu\n", strlcat(dest, src, nb));
	return (0);
}
