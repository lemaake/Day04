/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemaake <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:45:49 by lemaake           #+#    #+#             */
/*   Updated: 2020/07/17 11:54:40 by lemaake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (!nb || power < 0)
		return (0);
	if (!power)
		return (1);
	return (nb * ft_recursive_power)
}
