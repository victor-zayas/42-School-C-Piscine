
#include<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int nb = 5;
	int nb1 = 3;
	int *a = &nb;
	int *b = &nb1;

	printf("Original %d %d", nb, nb1);
	ft_swap(a, b);
	printf("\n");
	printf("conversion %d %d", nb, nb1);
}

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
