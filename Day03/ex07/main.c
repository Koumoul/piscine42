/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 15:45:01 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/12 09:11:37 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str);

int		 main()
{
	char *ptr;
	char *ptr_rev;

	ptr = "hello";
	ptr_rev = ft_strrev(ptr);
	printf("%s\n", ptr_rev);
	return (0);
}
