/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:22:58 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/12 13:57:50 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb2(void)
{
	char	lista_numeros[5];
	int		num1;
	int		num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			lista_numeros[0] = '0' + num1 / 10;
			lista_numeros[1] = '0' + num1 % 10;
			lista_numeros[2] = ' ';
			lista_numeros[3] = '0' + num2 / 10;
			lista_numeros[4] = '0' + num2 % 10;
			write(1, &lista_numeros, 5);
			if (num1 != 98 || num2 != 99)
			{
				write(1, ", ", 2);
			}
			num2 ++;
		}
		num1 ++;
	}
}
/*
int main(void)
{
	ft_print_comb2();
	return (0);
}*/
