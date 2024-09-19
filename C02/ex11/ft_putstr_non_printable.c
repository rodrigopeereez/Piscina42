/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:11:49 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/20 18:37:03 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_put(char c)
{
	write (1, &c, 1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_put(str[i]);
		else
		{
			ft_put('\\');
			ft_put("0123456789abcdef"[(unsigned char)str[i] / 16]);
			ft_put("0123456789abcdef"[(unsigned char)str[i] % 16]);
		}
		i++;
	}
}
/*
int main()
{
    char test_str[] = "Hola\nMundo\t!";

    printf("Cadena original: %s\n", test_str);
    printf("Cadena con caracteres no imprimibles:\n");
    ft_putstr_non_printable(test_str);
    ft_put('\n');
    return 0;
}*/
