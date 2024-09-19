/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:49:56 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/28 15:28:21 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	desta;
	unsigned int	srca;
	unsigned int	i;

	desta = 0;
	srca = 0;
	while (dest[desta] != '\0')
		desta++;
	while (src[srca] != '\0')
		srca++;
	if (size <= desta)
		return (size + srca);
	i = 0;
	while (src[i] != '\0' && i < size - desta -1)
	{
		dest[desta + i] = src[i];
		i++;
	}
	dest[desta + i] = '\0';
	return (desta + srca);
}
/*
int main(void)
{
	char str1[] = "hola";
	char str2[] = "rodriii";

	printf("%u\n", ft_strlcat(str1, str2, 1));
}*/
