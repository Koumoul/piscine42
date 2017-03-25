/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 15:23:57 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/25 17:56:53 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int		main()
{
	t_list *list;
	int data;
	void *ptr;

	ptr = NULL;
	data = 42;
	ptr = &data;
	list = ft_create_elem(ptr);
	ft_list_pushback(&list, ptr);
	printf("%d", *((int*)list->data));
	return (0);
}
