/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reperez- <reperez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:28:14 by reperez-          #+#    #+#             */
/*   Updated: 2024/02/29 15:42:36 by reperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power--)
		result = result * nb;
	return (result);
}

/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(3, 7));
	printf("%d\n", ft_iterative_power(7, -4));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(7, 2));
	return (0);
}
*/
