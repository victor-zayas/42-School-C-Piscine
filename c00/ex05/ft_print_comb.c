/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:40:57 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/03/04 13:28:57 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a, char b, char c);

void	ft_print_comb(void)
{
	char	primero;
	char	segundo;
	char	tercero;

	primero = '0';
	while (primero <= '7')
	{
		segundo = primero + 1;
		while (segundo <= '8')
		{
			tercero = segundo + 1;
			while (tercero <= '9')
			{
				ft_putchar(primero, segundo, tercero);
				if (primero != '7' || segundo != '8' || tercero != '9')
				{
					write(1, ", ", 2);
				}	
				tercero++;
			}
			segundo++;
		}
		primero++;
	}
}

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}
