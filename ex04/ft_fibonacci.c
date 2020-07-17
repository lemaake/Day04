/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemaake <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:55:43 by lemaake           #+#    #+#             */
/*   Updated: 2020/07/17 12:00:29 by lemaake          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index ==0)
		return (0);
	if (index ==1)
		return (1);
	return (ft_fibonacci(index -1))
}
