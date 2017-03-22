/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contact_params.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 16:44:07 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/21 15:18:27 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_strcat(char *dest, char *str)
{
	int len_str;
	int len_dest;
	int i;

	i = 0;
	len_str = ft_len(str);
	len_dest = ft_len(dest);

	while (i < len_str)
	{
		dest[len_dest + i] = str[i];
		i++;
	}
	dest[i] = '\n';
	return (len_dest + len_str);
}

char	*ft_concat_params(int argc, char **argv)
{
	int i;
	char *dest;

	i = 1;
	dest = (char*)malloc(sizeof(char) * 5000);
	while (i < argc)
	{
		ft_strcat(dest, argv[i]);
		i++;
	}
	dest[ft_len(dest) + 1] = '\0';
	return (dest);
}

#include <stdio.h>
int		main(int argc, char **argv)
{
	char *dest;

	dest = ft_concat_params(argc, argv);
	printf("%s",dest);
	return (0);
}

