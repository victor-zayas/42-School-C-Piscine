/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:16:59 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/03/08 17:37:18 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size); */
unsigned int	ft_strlen(char *str);

/* int	main(void)
{
	char	src[] = "buenas";
	char	dest[] = "hola";
	int		nb = 6;

	printf("%u\n dest: %s", ft_strlcat(dest, src, nb), dest);
} */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	src_size;
	unsigned int	src_index;
	unsigned int	total_lenght;

	total_lenght = ft_strlen(dest) + ft_strlen(src);
	index = 0;
	while (index < size && dest[index] != '\0')
	{
		dest[index] = dest[index];
		index++;
	}
	src_index = 0;
	src_size = size - ft_strlen(src);
	while (src[src_index] != '\0'
		&& src_index + index < size && src_index < ft_strlen(src))
	{
		dest[index + src_index] = src[src_index];
		src_index++;
	}
	dest[index + src_index] = '\0';
	return (total_lenght);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}
