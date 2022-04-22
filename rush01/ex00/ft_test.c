/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:01:29 by amarzana          #+#    #+#             */
/*   Updated: 2022/02/26 17:33:30 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_test(int *arr);

int	main(void)
{
	int	arr[4] = {4, 1, 3, 2};
	int	counter = 0;

	counter = ft_test(arr);
	printf("%d", counter);
	return (0);
}

int	ft_test(int *arr)
{
	int	position;
	int	max_height;
	int	counter;

	max_height = 0;
	position = 0;
	counter = 0;
	while (position < 4)
	{
		if (arr[position] > max_height)
		{
			max_height = arr[position];
			counter++;
		}
		position++;
	}
	return (counter);
}
