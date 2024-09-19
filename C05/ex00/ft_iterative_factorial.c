/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:59:27 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/28 13:46:49 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		fact;

	i = 1;
	fact = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}
