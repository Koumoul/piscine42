/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 14:36:11 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/25 17:23:10 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list t_list;

struct s_list
{
	void		*data;
	t_list		*next;
};

t_list	*ft_create_elem(void *data);
void	ft_list_pushback(t_list **begin_list, void *data);

#endif
