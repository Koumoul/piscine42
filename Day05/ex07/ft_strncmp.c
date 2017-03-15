/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 23:15:24 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 09:02:36 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


int		ft_strcmp(char *s1, char *s2)
{
	int len_s1;
	int len_s2;
	int diff;
	
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if ( len_s1 > len_s2)
	{
		return (1);
	}
    else if (len_s1 < len_s2)
	{
		return (-1);
	}
	else if (len_s1 == len_s2)
	{
		return (0)
	}
}


