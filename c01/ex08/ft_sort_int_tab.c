/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:02:47 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/03/04 14:09:41 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5];
	int	length;
	int	loop;

	length = 5;
	tab[0] = 3;
	tab[1] = 1;
	tab[2] = 4;
	tab[3] = 2;
	tab[4] = 0;
	loop = 0;
	while (loop < length)
	{
		printf("%d", tab[loop]);
		loop++;
	}
	ft_sort_int_tab(tab, length);
	printf("%s", "\n" );
	loop = 0;
	while (loop < length)
	{
		printf("%d", tab[loop]);
		loop++;
	}
}
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	loop1;
	int	loop2;
	int	aux;

	loop1 = 0;
	while (loop1 < size)
	{
		loop2 = 0;
		while (loop2 < size)
		{
			if (tab[loop1] < tab[loop2])
			{
				aux = tab[loop1];
				tab[loop1] = tab[loop2];
				tab[loop2] = aux;
			}
			loop2++;
		}
		loop1++;
	}
}
