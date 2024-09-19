/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:23:40 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/14 12:47:49 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
    int a = 10;
    int b = 5;
    int div;
    int mod;
    
    ft_div_mod(a, b, &div, &mod);
    char buffer[50];
    write(STDOUT_FILENO, buffer, length);

    return (0);
}*/
