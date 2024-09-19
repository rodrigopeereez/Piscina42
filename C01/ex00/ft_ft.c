/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:01:39 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/14 12:46:11 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int main(void)
{
    int num;
    char c;

    num = '0';
    ft_ft(&num);
    c = num / 10 + '0';
    write(STDOUT_FILENO, &c, 1);
    c = num % 10 + '0';
    write(STDOUT_FILENO, &c, 1);

    return (0);
}*/
