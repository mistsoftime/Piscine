/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reperez- <reperez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:32:12 by reperez-          #+#    #+#             */
/*   Updated: 2024/02/28 12:17:26 by reperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	s;

	s = 6;
	printf("%d", ft_str_is_printable(" "));
	printf("%d", ft_str_is_printable("aaa"));
	printf("%d", ft_str_is_printable(&s));
	printf("%d", ft_str_is_printable(""));
	return (0);
}
*/
