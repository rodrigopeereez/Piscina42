/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:26:35 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/13 16:22:50 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*
int main(void)
{
	int num = 0;
	int *p1 = &num;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;
	
	ft_ultimate_ft(p9);
	
	char buffer[20];
	int length = snprintf(buffer, sizeof(buffer), "%d\n", num);
	write(STDOUT_FILENO, buffer, length);
	return (0);
}*/
