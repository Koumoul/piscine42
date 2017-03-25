/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 15:28:43 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/25 17:52:09 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_pushback(t_list **begin_list, void *data)
{
	t_list	*new_elemnt;

	new_elemnt = ft_create_elem(data);
	new_elemnt->data = data;
	new_elemnt->next = *begin_list;
}





