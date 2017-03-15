/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 22:12:24 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 21:00:36 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(src[i] != '\0' && i < n )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main()
{
	char src[] = "hello world aaaaaaaaaaaaaaaaaaaaa";
	char dest[] = "";
	unsigned int n;

	n = 3;
	printf("%s", ft_strncpy(dest, src, n));
	return (0);
}
