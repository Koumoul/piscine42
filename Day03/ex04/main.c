/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 16:16:44 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/11 15:47:02 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);
int 	main()
{
	int a;
	int b;
	int *ptr_a;
	int *ptr_b;

	a = 5;
	b = 2;
	ptr_a = &a;
	ptr_b = &b;

	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("%d\n", a);
	printf("%d\n", b);
}
