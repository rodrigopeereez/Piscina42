/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:02:36 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/14 12:49:42 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		resultadodiv;
	int		resto;

	resultadodiv = *a / *b;
	resto = *a % *b;
	*a = resultadodiv;
	*b = resto;
}
/*
int main(void)
{
    int a = 10;
    int b = 5;

    ft_ultimate_div_mod(&a, &b);

    char buffer[50];
    write(STDOUT_FILENO, buffer, length);

    return 0;
}*/
