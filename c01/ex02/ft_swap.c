/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:52:10 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/02/23 17:25:51 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int num1 = 5;
	int num2 = 10;
	int *a = &num1;
	int *b = &num2;

	printf("Original %d %d", num1, num2);
	ft_swap(a, b);
	printf("Invertido %d %d", num1, num2);
	return(0);
}
*/

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
