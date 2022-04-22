/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:40:37 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/03/03 15:11:49 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "s_bdfrgx8tyh8w}~E?9w/H0yi~*Wz>,V+i$";

	printf("%s", ft_strcapitalize(str));
} */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	check = 0;
	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		check = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] < '0' || str[i] > '9') && (str[i] < 'a' || str[i] > 'z'))
			check = 1;
		if (str[i] >= '0' && str[i] <= '9')
			check = 0;
		if (str[i] >= 'a' && str[i] <= 'z' && check == 1)
		{
			str[i] -= 32;
			check = 0;
		}
		i++;
	}
	return (str);
}
