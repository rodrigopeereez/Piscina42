/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:49:08 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/19 16:20:50 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_complementa(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	ft_complementa(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (j == 1)
			{
				str[i] = str[i] - 32;
				j = 0;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
/*
int main()
{
	char frase[] = "salut, comment tu vas ? 42mots quarante-deux";

	printf("%s", frase);
	ft_strcapitalize(frase);
	printf("\n%s", frase);
	return (0);
}*/
