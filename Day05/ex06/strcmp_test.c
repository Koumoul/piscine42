/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 09:17:35 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/15 12:42:15 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main ()
{
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "AbCdEf");
	strcpy(str2, "aBcDeF");
	ret = strcmp(str1, str2);

	printf("ret = %d", ret);
/*
	if(ret < 0)
	{
		printf("ret = %d/n");
	}
	else if(ret > 0) 
	{
		printf("str2 is less than str1");
	}
	else 
	{
		printf("str1 is equal to str2");
	}
*/

	return(0);
}

