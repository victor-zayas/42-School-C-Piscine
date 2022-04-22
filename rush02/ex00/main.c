/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:02:57 by ftataje-          #+#    #+#             */
/*   Updated: 2022/03/06 19:35:50 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(void)
{
	ft_generate_dict();
	return (0);
}

//Hace un malloc de numb_lines*longest_line y lo llena.
void	ft_generate_dict(void)
{
	char	**dictionary;

	dictionary = malloc(10000);
	ft_fill_dict(dictionary);
}

//Guardar los valores de numbers.dict a **dictionary
void	ft_fill_dict(char **dictionary)
{
	int		fd;
	int		y;
	int		x;
	char	buf;

	x = 0;
	y = 0;
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		write(1, "Error", 5);
	while (read(fd, &buf, 1))
	{
		if (buf != '\n' && buf != EOF)
			dictionary[y][x++] = buf;
		else
		{
			y++;
			x = 0;
		}
	}
	write(1, &dictionary[0], 10000);
	close(fd);
	free(dictionary);
}
