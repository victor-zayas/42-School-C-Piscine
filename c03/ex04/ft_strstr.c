/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:45:37 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/03/08 18:32:09 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "Hola, buenas tardes";
	char	to_find[] = "buenas";

	printf("%s", ft_strstr(str, to_find));
} */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		z = 0;
		while (to_find[z] == str[i + z] && to_find[z] != '\0')
		{
			if (to_find[z + 1] == '\0')
				return (&str[i]);
			z++;
		}
		i++;
	}
	return (0);
}
