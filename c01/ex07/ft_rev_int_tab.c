/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:55:37 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/02/25 12:47:05 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5];

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	ft_rev_int_tab(tab, 5);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	aux;

	a = 0;
	size = size -1;
	while (a < size)
	{
		aux = tab[a];
		tab[a] = tab[size];
		tab[size] = aux;
		a++;
		size--;
	}
}
