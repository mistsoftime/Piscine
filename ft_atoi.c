/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reperez- <reperez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:55:26 by reperez-          #+#    #+#             */
/*   Updated: 2024/02/28 18:43:36 by reperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_atoi(char *str)
{
	int	i;
	int	neg;

	neg = 1;
	i = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	while (*str == '-' || (*str == '+'))
	{
		if (*str == '-')
			neg = neg * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	return (i * neg);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("   --+-+--+-4681uru18"));
	printf("%d\n", ft_atoi("  ---+--+1234ab567"));
	return (0);
}
*/
