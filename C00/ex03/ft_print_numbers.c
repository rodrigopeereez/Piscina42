/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <rodperez@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:46:29 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/12 13:42:34 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num;

	num = '0';
	while (num <= '9')
	{
		write(1, &num, 1);
		num ++;
	}
}
/*
int main(void)
{
	ft_print_numbers();
	return 0;
}
*/
