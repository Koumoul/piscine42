/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourhis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/25 21:38:20 by nbourhis          #+#    #+#             */
/*   Updated: 2017/03/25 22:09:54 by nbourhis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && ( s1[i] != 0 || s2[i] != 0))
	{
		i++;
	}
	if ( s1[i] == 0 || s2[i] == 0)
		i--;
	return (s1[i] - s2[i]);
}

int		ft_compare(char **tab1, char **tab2)
{
	int i;
	i = 0;
	while (tab1[i][0] || tab2[i][0])
	{
		if (ft_strcmp(tab1[i],tab2[i]) != 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	char tab1[] = "o---o";
	char tab2[] = "|---|";
	char tab3[] = "|---|";
	char tab4[] = "o---o";

	char tab5[] = "o---o";
	char tab6[] = "|+--|";
	char tab7[] = "|---|";
	char tab8[] = "o---o";

	char **metatab1;
	char **metatab2;

	int ret;

	metatab1 = (char**)malloc(sizeof(char*) * 5);
	metatab2 = (char**)malloc(sizeof(char*) * 5);

	metatab2[4] = (char*)malloc(sizeof(char));
	metatab2[4] = (char*)malloc(sizeof(char));

	metatab1[0] = tab1;
	metatab1[1] = tab2;
	metatab1[2] = tab3;
	metatab1[3] = tab4;
	metatab1[4][0] = 0;

	metatab2[0] = tab5;
	metatab2[1] = tab6;
	metatab2[2] = tab7;
	metatab2[3] = tab8;
	metatab2[4][0] = 0;

	ret = ft_compare(metatab1, metatab2);
	printf("%d\n", ret);
	return (0);
}


	

