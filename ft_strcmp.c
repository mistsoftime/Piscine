/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reperez- <reperez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:43:29 by reperez-          #+#    #+#             */
/*   Updated: 2024/02/23 12:09:03 by reperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("Hello", "Helloworld"));
	printf("%d\n", strcmp("Hello", "Helloworld"));
	return (0);
}
*/
