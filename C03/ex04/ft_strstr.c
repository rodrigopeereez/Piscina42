/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:39:23 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/25 12:49:05 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
		j = 0;
	}
	if (to_find[j] == '\0')
	{
		return (str);
	}
	return (0);
}
/*
int main(void)
{
	char str1[] = "hoy salgo con los chavales";
	char str2[] = "los chavales";

	printf("%s", ft_strstr(str1, str2));
}*/
