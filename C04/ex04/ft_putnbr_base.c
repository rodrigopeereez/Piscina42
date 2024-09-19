/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:02:33 by rodperez          #+#    #+#             */
/*   Updated: 2024/08/27 18:13:10 by rodperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i >= 2);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	length;
	unsigned int	num;

	if (!is_valid_base(base))
		return ;
	length = 0;
	while (base[length])
		length++;
	if (nbr < 0)
	{
		ft_putchar('-');
		num = -nbr;
	}
	else
		num = nbr;
	if (num >= length)
		ft_putnbr_base(num / length, base);
	ft_putchar(base[num % length]);
}
/*
int main(void)
{
        ft_putnbr_base(42, "01");
        printf("\n");
}*/
