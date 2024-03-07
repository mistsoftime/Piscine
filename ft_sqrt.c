/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reperez- <reperez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:30:56 by reperez-          #+#    #+#             */
/*   Updated: 2024/03/04 21:28:38 by reperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_sqrt(int nb)
{
	int	result;
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 1;
	while (i < nb && i <= 46340)
	{
		if (i * i == nb)
		{
			result = i;
			return (result);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_sqrt(2147395600));
	return (0);
}
*/
