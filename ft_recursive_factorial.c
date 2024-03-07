/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reperez- <reperez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:33:44 by reperez-          #+#    #+#             */
/*   Updated: 2024/02/29 13:34:05 by reperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d\n", ft_recursive_factorial(7));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(-2));
	return (0);
}
*/
