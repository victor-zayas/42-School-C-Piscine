/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:40:06 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/03/09 17:08:31 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		ft_check_base(char *base);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char x);

/* int	main(void)
{
	int		nbr;
	char	*base;

	nbr = 6431231;
	base = "01";
	ft_putnbr_base(nbr, base);
	return (0);
} */

int	ft_check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	tab;

	tab = ft_strlen(base);
	if (!ft_check_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar(nbr);
		}
		if (nbr >= 9)
		{
			ft_putnbr_base(nbr / tab, base);
			ft_putchar(base[nbr % tab]);
		}
		if (nbr <= 9 && nbr >= 0)
			ft_putchar(base[nbr]);
	}
}

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

void	ft_putnbr(int nb)
{
	char	number;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 12);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb / 10)
		{
			number = nb % 10 + '0';
			ft_putnbr(nb / 10);
		}
		write(1, &number, 1);
	}
}
