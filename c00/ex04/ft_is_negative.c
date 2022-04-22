/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:11:54 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/02/21 14:31:41 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	i;

	p = 'P';
	i = 'N';
	if (n >= 0)
	{
		write(1, &p, 1);
	}
	else
	{
		write(1, &i, 1);
	}
}