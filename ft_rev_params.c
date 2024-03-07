/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reperez- <reperez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:06:23 by reperez-          #+#    #+#             */
/*   Updated: 2024/03/05 11:48:16 by reperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	v;

	c = argc - 1;
	while (c != 0)
	{
		v = 0;
		while (argv[c][v])
		{
			write (1, &argv[c][v], 1);
			v++;
		}
		write (1, "\n", 1);
		c--;
	}
	return (0);
}
