/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:29:32 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/20 18:23:43 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	largo_string(char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_long;

	i = 0;
	src_long = largo_string(src);
	if (size == 0)
	{
		return (src_long);
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_long);
}
/*
int main()
{
	char source[] = "Hola, mundo!";
	char destination[20];
	unsigned int size = 10;
	unsigned int result;
	
	result = ft_strlcpy(destination, source, size);
	printf("Fuente: %s\n", source);
	printf("Destino (después de ft_strlcpy): %s\n", destination);
	printf("Longitud de la cadena fuente: %u\n", result);
	return (0);
}*/
