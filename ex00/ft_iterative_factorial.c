/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemaake <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:18:36 by lemaake           #+#    #+#             */
/*   Updated: 2020/07/16 10:52:45 by lemaake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	int res;
	int 1;

	res = 1;
	i = 1;

	if (nb >= 0 && nb <= 12)
	{
		while (i <=nb)
			res * = i++;
		return (res);
	}
	else return (0);
}
