/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:33:35 by rodsanch          #+#    #+#             */
/*   Updated: 2022/02/20 19:26:38 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	columna;
	int	fila;

	fila = 0;
	columna = 0;
	while (fila < y)
	{
		fila++;
		while (columna < x)
		{
			columna++;
			if ((fila == 1 && columna == 1) || (columna == x && fila == y))
				ft_putchar('/');
			else if ((fila == y && columna == 1) || (columna == x && fila == 1))
				ft_putchar('\\');
			else if ((columna != 1 && columna != x) && (fila != 1 && fila != y))
				ft_putchar(' ');
			else
				ft_putchar('*');
		}
		columna = 0;
		ft_putchar('\n');
	}
}
