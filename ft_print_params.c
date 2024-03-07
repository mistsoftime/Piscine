/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reperez- <reperez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:06:13 by reperez-          #+#    #+#             */
/*   Updated: 2024/03/04 18:52:54 by reperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	v;

	c = 1;
	while (c < argc)
	{
		v = 0;
		while (argv[c][v])
		{
			write (1, &argv[c][v], 1);
			v++;
		}
		write (1, "\n", 1);
		c++;
	}
	return (0);
}
