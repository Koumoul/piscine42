/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 19:32:56 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/25 20:50:42 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char *buf;
	int len;
	int temp;

	buf = 0;	
	len = 0;
	temp = 1;
	temp = len;
	len++;
	while (len != temp)
	{
		temp = len;
		len++;
		buf = (char*)malloc(sizeof(char) * len);
		len = read(0, buf - len, len);
		printf("len = %d, temp = %d, in = %s\n", len, temp, buf - len);
	}
	return (0);
}

