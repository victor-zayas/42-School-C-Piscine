/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:13:34 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/02/25 10:43:14 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*
void	ft_putstr(char *str);

int	main(void)
{
	char	*a;

	a = "Buenas tardes";
	ft_putstr(a);
}
*/

void	ft_putstr(char *str)
{
	int	string;

	string = 0;
	while (str[string])
	{
		write(1, &str[string], 1);
		string++;
	}
}
