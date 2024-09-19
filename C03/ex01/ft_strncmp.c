/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:33:33 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/25 16:02:35 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int main()
{
	char str1[] = "Holabrother";
	char str2[] = "Holabrosky";
	int result = ft_strncmp(str1, str2, 9);

	if (result == 0)
		printf("Cadenas iguales.\n");
	else if (result < 0)
		printf("Cadena sr1 menor.\n");
	else
		printf("Cadena str1 mayor.\n");
	printf("%d", result);
}*/
