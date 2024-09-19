/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:07:54 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/25 12:29:53 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		l;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[l] != '\0')
	{
		dest[i] = src[l];
		l++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char str1[] = "hola";
	char str2[] = "caracola";

	printf("Cadenas unidas: %s\n", ft_strcat(str1, str2));
	return (0);
}*/
