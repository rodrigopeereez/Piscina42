/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:40:46 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/15 16:24:27 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		cafe;

	cafe = 0;
	while (str[cafe] != '\0')
	{
		cafe++;
	}
	return (cafe);
}

int main(void)
{
	char siu[] = "hola";
	int x;
	
	x = ft_strlen(siu);
	printf("longitud de la cadena %s es: %d\n", siu, x);
	return (0);
}
