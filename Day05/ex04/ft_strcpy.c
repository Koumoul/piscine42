/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 22:12:24 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/13 22:54:35 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int		main()
{
	char src[] = "hello";
	char dest[5];
	char *ret;

	ret = ft_strcpy(dest, src);
	printf("%s", ret);
	return (0);
}
