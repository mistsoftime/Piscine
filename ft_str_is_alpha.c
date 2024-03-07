/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reperez- <reperez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:51:02 by reperez-          #+#    #+#             */
/*   Updated: 2024/02/22 16:46:41 by reperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' )
			i++;
		else if (str[i] >= 'a' && str[i] <= 'z' )
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d", ft_str_is_alpha("ghtr"));
	printf("%d", ft_str_is_alpha("aIO13oP"));
	return (0);
}
*/
