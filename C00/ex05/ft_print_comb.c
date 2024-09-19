/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:54:29 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/13 14:58:31 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_print(char a, char b, char c)
{
	if (a < b && b < c)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7' || b != '8' || c != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combinacion(char a, char b, char c)
{
	if (a <= '7')
	{
		if (b <= '8')
		{
			if (c <= '9')
			{
				ft_print_print(a, b, c);
				ft_print_combinacion(a, b, c + 1);
			}
			else
			{
				ft_print_combinacion(a, b + 1, b + 2);
			}
		}
		else
		{
			ft_print_combinacion(a + 1, a + 2, a + 3);
		}
	}
}

void	ft_print_comb(void)
{
	ft_print_combinacion('0', '1', '2');
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
