#include<unistd.h>

void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
}

void	ft_print_alphabet(void)
{
	int	nb;

	nb = '9';
	while (nb >= '0')
	{
		write(1, &nb, 1);
		nb--;
	}
}
