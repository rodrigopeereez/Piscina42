/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:47:49 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/14 13:07:10 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int main(void)
{
	int a = 5;
	int b = 10;

	ft_swap(&a, &b);
	
	char buffer[50];
	int length = snprintf(buffer, sizeof(buffer), "a = %d, b = %d\n", a, b);
	write(STDOUT_FILENO, buffer, length);
	return (0);
}*/
