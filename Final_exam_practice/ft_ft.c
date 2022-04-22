#include<stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	nbr;

	nbr = 0;
	printf(ft_ft(&nbr));
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
