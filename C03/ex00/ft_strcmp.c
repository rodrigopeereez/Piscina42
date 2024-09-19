/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:58:23 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/22 17:12:45 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		almacen;

	almacen = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	if (s1[i] != s2[i])
	{
		almacen = (s1[i] - s2[i]);
	}
	return (almacen);
}
/*
int main()
{
	char *str;
	char *klk;
	int resultado;

	str = "ca";
	klk = "casi";
	resultado = ft_strcmp(str, klk);
	printf("Cadena: %d", resultado);
	return (0);
}*/
