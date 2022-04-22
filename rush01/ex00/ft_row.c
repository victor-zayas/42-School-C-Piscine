/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_row.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:51:48 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/26 17:22:33 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_store(int **row, int *count);

void	ft_row(int *row)
{
	int count;
	while (++row[0] <= 4)
	{
		row [1] = 0;
		while (++row[1] <= 4)
		{
			row [2] = 0;
			while (++row[2] <= 4)
			{
				row [3] = 0;
				while (++row[3] <= 4)
				{
					ft_store(row);
				}
			}
		}
	}
}

void	ft_store(int **row, int *count)
{
	int array [6] [24];
	count;

	if (row[3] != row[2] && row[2] != row[1]
		&& row[1] != row[0] && row[3] != row[1]
		&& row[3] != row[0] && row[2] != row[0])
		{
			
			while
		}	
}