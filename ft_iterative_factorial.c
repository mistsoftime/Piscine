/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reperez- <reperez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 09:12:11 by reperez-          #+#    #+#             */
/*   Updated: 2024/02/29 13:41:36 by reperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (n == 1 || n == 0)
		return (1);
	if (n < 0)
		return (0);
	while (n > 1)
	{
		nb = nb * (n - 1);
		n--;
	}
	return (nb);
}

/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(7));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(-2));
	return (0);
}
*/
