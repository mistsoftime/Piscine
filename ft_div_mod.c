/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reperez- <reperez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:24:09 by reperez-          #+#    #+#             */
/*   Updated: 2024/02/20 13:59:08 by reperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
 * int	main(void)
{
	int	div;
	int	mod;
	char	r;

	r = 'y';

	ft_div_mod(10, 3, &div, &mod);
	if (div == 10 / 3 && mod == 10 % 3)
	{
		write(1, &r, 1);
	}
	return (0);
}
*/
