/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reperez- <reperez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:32:40 by reperez-          #+#    #+#             */
/*   Updated: 2024/02/20 14:46:43 by reperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tr;

	tr = *a;
	*a = *b;
	*b = tr;
}

/*
int	main(void)
{
	int a;
	int	b;

	a = 7;
	b = 9;
	
	ft_swap(&a, &b);
	char	j = 'y';
	if (b == 7 && a == 9)
	{
		write(1, &j, 1);
	}
	return (0);
}
*/
