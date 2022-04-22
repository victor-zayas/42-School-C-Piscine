#include<stdio.h>

int	ft_putstr(char *str);

int	main(void)
{
	printf("Length = %d", ft_putstr("hola"));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
