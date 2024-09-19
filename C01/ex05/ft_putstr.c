/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:22:07 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/14 13:42:53 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		xd;

	xd = 0;
	while (str[xd] != '\0')
	{
		write(1, &str[xd], 1);
		xd++;
	}
}
/*
int main(void)
{
	char str[] = "hola";
	ft_putstr(str);
	return (0);
}*/
