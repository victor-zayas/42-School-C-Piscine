/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:33:59 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/03/04 10:46:59 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char x);

void	ft_print_comb2(void)
{
	int	par;
	int	par1;

	par = -1;
	while (par++ < 98)
	{
		par1 = par;
		while (par1++ < 99)
		{
			ft_putchar('0' + par / 10);
			ft_putchar('0' + par % 10);
			ft_putchar(' ');
			ft_putchar('0' + par1 / 10);
			ft_putchar('0' + par1 % 10);
			if (par != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}

void	ft_putchar(char x)
{
	write(1, &x, 1);
}
