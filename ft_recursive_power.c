/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reperez- <reperez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:50:50 by reperez-          #+#    #+#             */
/*   Updated: 2024/02/29 16:20:37 by reperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}

/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(3, 7));
	printf("%d\n", ft_recursive_power(7, -4));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(7, 2));
	return (0);
}
*/
