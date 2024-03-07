/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reperez- <reperez-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:42:39 by reperez-          #+#    #+#             */
/*   Updated: 2024/02/20 21:42:42 by reperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
int	main(void)
{
	int	c;

	ft_ft(&c);

	if (c == 42){
		write(1,"test pass",9);
	}
	return (0);
}



 I the result is an asterisk, because ASCII 42 
 equals asterisk, and it is pointing to 42
*/
