/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:11:31 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/03/10 10:25:52 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_convert_number(long num);

/* int	main(void)
{
	ft_putnbr(-2147483648);
} */

void	ft_putnbr(int nb)
{
	long	num;

	num = nb;
	ft_convert_number(num);
}

void	ft_convert_number(long num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
		if (num > 9)
		{
			ft_putnbr(num / 10);
			ft_putchar(num % 10 + '0');
		}
		else
			ft_putchar(num + '0');
	}
	else if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putchar(num % 10 + '0');
	}
	else
		ft_putchar(num + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
