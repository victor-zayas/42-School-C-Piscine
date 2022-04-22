#include<unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char a, char b, char c);

int	main(void)
{
	ft_print_comb();
}

void	ft_print_comb(void)
{
	char	pr;
	char	sg;
	char	tr;

	pr = '0';
	while (pr <= '7')
	{
		sg = pr + 1;
		while (sg <= '8')
		{
			tr = sg +1;
			while (tr <= '9')
			{
				ft_putchar(pr, sg, tr);
				if (pr != '7')
					write(1, ", ", 2);
				tr++;
			}
			sg++;
		}	
		pr++;
	}
}

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}
