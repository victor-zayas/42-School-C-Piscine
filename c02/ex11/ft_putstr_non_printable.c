/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:58:04 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/03/08 15:04:42 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr_non_printable(char *str);
void	magic(int c);

int	main(void)
{
	char str[] = "assd \nfgh ghj";

	ft_putstr_non_printable(str);
}

void	hexadecimal(int ch)
{
	char	*c;

	c = "01123456789abcdef";
	if (ch < 16)
	{
		write(1, "0", 1);
	}
	if (ch > 16)
	{
		hexadecimal(ch % 16);
		hexadecimal(ch / 16);
	}
	else
	{
		write(1, &c[ch], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
		{	
			write(1, "\\", 1);
			hexadecimal(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
