#include<unistd.h>

void	ft_putchar(char c);
void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
}

void	ft_print_comb2(void)
{
	int	par1;
	int	par2;

	par1 = -1;
	while (par1++ < 98)
	{
		par2 = par1;
		while (par2++ < 99)
		{
			ft_putchar(par1 / 10 + '0');
			ft_putchar(par1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(par2 / 10 + '0');
			ft_putchar(par2 % 10 + '0');
			if (par1 != 98)
				write(1, ", ", 2);
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
